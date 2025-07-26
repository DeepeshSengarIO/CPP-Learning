#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> subset;

/* An elegant way to go through all subsets of a set is to use recursion. */
void search1(int k){
    if(k==n){
        // Base case: process the subset
        cout << "{";
        for (int i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1) cout << ", ";
        }
        cout << "}" << endl;
    }else{
        // Exclude k from the subset
        search1(k+1);
        // Include k in the subset
        subset.push_back(k);
        search1(k + 1);
        subset.pop_back(); // backtrack

    }
}

void search2(int n){
    for(int i = 0; i < (1<<n); i++){
        vector<int> arr;
        for(int j = 0; j < n; j++){
            if(i&(1<<j)) arr.push_back(j);
        }
        for(auto x: arr){
            cout << x;
        }
        cout << endl;
    }
}

int main(){
    n = 3;
    search2(n);
}
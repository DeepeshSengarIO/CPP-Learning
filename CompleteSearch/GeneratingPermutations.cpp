#include <iostream>
#include <vector>

using namespace std;
vector<int> permutation;
vector<bool> chosen;
int n;

void search() {
    if (permutation.size() == n) {
        
    } else {
        for (int i = 0; i < n; i++) {
            if (chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(i);
            search();
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}

int main(){
    n = 3;
    
}
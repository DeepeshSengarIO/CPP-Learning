#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
    Sorting Functions
*/
void sort_functions(){
    
    vector<int> v = {4,2,5,4,8,6,9};
    sort(v.begin(), v.end()); // increasing order
    sort(v.rbegin(), v.rend()); // decreasing order

    // normals sort
    int a[] = {4,7,2,4,1,8,5};
    int n = 7; // array size
    sort(a, a+n);

    // string sort
    std::string s = "Monkey";
    sort(s.begin(), s.end());

    // pairs sorting
    vector<pair<int, int>> p;
    p.push_back({2,1,4});
    p.push_back({1,5,3});
    p.push_back({2,1,3});
    sort(p.begin(), p.end());


}

struct P {
    int x, y;
    bool operator<(const P &p){
        if(x!=p.x) return x < p.x;
        else return y < p.y;
    }
};

void comparison_function(string a, string b){
    if(a.size() != b.size()) return a.size() < b.size();
    return a < b;
}

void comparison_function_usage(){
    vector<int> v = {4,2,5,4,8,6,9};
    sort(v.begin(), v.end(), comparison_function);
}

void binary_search_1(int arr[], int x, int n){
    int a = 0, b = n-1;
    while(a<=b){
        int k = (a+b)/2;
        if(arr[k] == x){
            // x found at k
        }
        if(arr[k]> x) b = k-1;
        else a = k+1;
    }
}

void binary_search_2(int arr[], int x, int n){
    int k=0;
    for(int b = n/2; b>=1; b/=2){
        while(k+b < n && arr[k+b] <= x) k+=b;
    }
    if(arr[k] == x){
        // x found at index k
    }
}

void more_functions(int arr[], int n, int x){
    // lower_bound: returns the pointer to first array element whose value is at least x.
    auto k1= lower_bound(arr, arr+n, x);
    // upper_bound: returns the pointer to first array element whose value is larger than x.
    auto k2 = upper_bound(arr, arr+n, x);
    std::cout << k2;
    // equal_range: return both the lower_bound and the upper_bound
    auto k3 = equal_range(arr, arr+n, x);
    std::cout << k3.second - k3.first;
}

int main(){
    
}
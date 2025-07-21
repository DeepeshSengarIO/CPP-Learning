#include <iostream>
#include <vector>
using namespace std;

// vector is dynamic array in cpp
void vector_usage(){
    // init the vectot
    vector<int> v;
    vector<int> v1 = {2,4,2,5,1};
    vector<int> v(10); //  size 10, initial value 0
    vector<int> v(10, 5); // size 10, initial value 5
    

    // push_back() pushes back 
    v.push_back(3);
    v.push_back(4);
    v.push_back(5); // 3 4 5

    // access last element
    v.back(); // 5

    // pop_back() removes the last element
    v.pop_back(); 
    cout << v[0]; // 3 4 

    for(auto x: v){
        cout << x;
    }
}

int main(){
    vector_usage();
}
#include <iostream>
#include <string>
using namespace std;

void string_usage(){
    string s = "Deep";
    string ss = s + s;
    cout << ss; //DeepDeep
    s[1] = 'a'; //Daep
    string s2 = ss.substr(3, 4); // (a, b) begins at a index and till b length
}

int main(){
    
}
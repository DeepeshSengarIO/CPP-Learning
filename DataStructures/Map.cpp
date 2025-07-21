#include <iostream>
#include <map>
using namespace std;

void map_usage(){
    map<string,int> m;
    m["monkey"] = 4;
    m["banana"] = 3;
    m["harpsichord"] = 9;
    cout << m["banana"] << "\n"; // 3

    if (m.count("aybabtu")) {
        // key exists
    }

    for (auto x : m) {
        cout << x.first << " " << x.second << "\n";
    }
}

int main(){

}
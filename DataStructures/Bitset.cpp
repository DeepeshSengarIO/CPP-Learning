#include <iostream>
#include <set>
using namespace std;

void bitset_usage(){
    
    bitset<10> s;
    s[1] = 1;
    s[3] = 1;
    s[4] = 1;
    s[7] = 1;
    cout << s[4] << "\n"; // 1
    cout << s[5] << "\n"; // 0

    bitset<10> s(string("0010011010")); // from right to left
    s.count();
    cout << s[4] << "\n"; // 1
    cout << s[5] << "\n"; // 0
}

void bit_operations(){
    bitset<10> a(string("0010110110"));
    bitset<10> b(string("1011011000"));
    cout << (a&b) << "\n"; // 0010010000
    cout << (a|b) << "\n"; // 1011111110
    cout << (a^b) << "\n"; // 1001101110
}

int main(){

}
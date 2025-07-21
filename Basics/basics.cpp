#include <iostream>
#include "header.h"
typedef long long ll;
#define F first;
/*
This is a 
multiline comment
*/
int i, j;
double d;

void data_types(){
    int x;
    x = 5;
    ll l = 123456789123456789LL;
    int y { 5 };
    std::cout << "This is a String" << "\n"; // This is the Single Line Comment
    std::cout << 5 << std::endl;
    std::cout << -5.6;
    std::cout << 'H';
    std::cout << y;
    std::cout << sizeof(int);
}

void multiply(){
    int a{};
    std::cin>> a;
    int b{};
    std::cin>> b;
    std::cout<< a*b;
}

int FIVE(){
    return 5;
}

void signed_unsigned(){
    // unsigned go from 0 to x
    // signed go from -x to x
    unsigned short x{ 0 }; // smallest 2-byte unsigned value possible
    std::cout << "x was: " << x << '\n';
}

int main(){
    int x { FIVE() }; // init the x as 5
    add(5, 4); // coming from the header file
    return 0;
}


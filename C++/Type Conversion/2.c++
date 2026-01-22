#include<iostream>

// Implicit 

int main(){
    char x = 100;
    std::cout << x;
    return 0;
}

// Output: d

// We implicitly cast this number (100) as a character. '100' is converted using the ASCII table to 'd'.
// 100 → d (ASCII)
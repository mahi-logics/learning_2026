#include<iostream>
#include<cmath>

int main(){
    double x = 3.14;
    double y = 3.56;
    double result;

    result = floor(y);
    std::cout << result;

    return 0;
}

// output: 3

/*

floor() in C++ (from <cmath>) rounds 'a floating-point number' down to the nearest integer.

Examples:

floor(4.7) → 4
floor(-3.2) → -4
floor(5.0) → 5

*/
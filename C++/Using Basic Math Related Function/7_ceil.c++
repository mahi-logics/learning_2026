#include<iostream>
#include<cmath>

int main(){
    double x = 3.14;
    double y = 3.56;
    double result;

    result = ceil(x);
    std::cout << result;

    return 0;
}

// output: 4

// ceil() in C++ (from <cmath>) rounds 'a floating-point number' up to the nearest integer, even if the number is already close to an integer.

// Examples:

// ceil(4.2) → 5
// ceil(-3.7) → -3
// ceil(5.0) → 5
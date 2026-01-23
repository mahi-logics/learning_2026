#include<iostream>
#include<cmath>

int main() {
    double x = 2;
    double y = 3;
    double result;

    result = pow(x, y);
    std::cout << result;
    return 0;
}

// output: 8

// pow() in C++ returns the value of 'a base number raised to a given power' (base^exponent) and is defined in <cmath>.
#include<iostream>

int main() {
    double x = 3;
    double y = 5;
    double result;

    result = std::min(x, y);
    std::cout << result;
    return 0;
}

// output: 3

// min() in C++ returns the smaller value between two numbers.
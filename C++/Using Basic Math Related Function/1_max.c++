#include<iostream>

int main() {
    double x = 3;
    double y = 5;
    double result;

    result = std::max(x, y);
    std::cout << result;
    return 0;
}

// ouput: 5

// max() in C++ returns the larger value between two numbers.
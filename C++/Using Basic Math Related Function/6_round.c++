#include<iostream>
#include<cmath>

int main(){
    double x = 3.14;
    double y = 3.56;
    double result;

    result = round(y);
    std::cout << result;

    return 0;
}

// output: 4

// round() in C++ rounds 'a floating-point number' to the nearest integer, rounding '.5 and above' up and 'below .5' down, and is defined in <cmath>.

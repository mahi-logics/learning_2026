/*
Type Conversion = 
    conversion a value of one data type to another data type.

        1) Implicit = Automatic
        2) Explicit = Preced value with new data type
*/

// Implicit

#include<iostream>

int main() {
    int points = 82.356;
    std::cout << points;
}

// output: 82   

// 'int' converted 82.356 to an integer and removed decimal part. This is Implicit (Automatic) conversion.
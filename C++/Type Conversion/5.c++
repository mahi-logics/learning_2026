#include<iostream>

int main(){
    int correct = 9;
    int total = 10;
    double percentage = correct / (double) total * 100;
    std::cout << percentage << "%";

    return 0;
}

// output: 90%

// in 'percentage' varriable i changed one of 'int' (between 9 and 10) into 'double' data type by 'Explicit Conversion'.

// as a result, this division (correct / total) is not an 'Integer Division' anymore.

// now, (9 / 10) = 0.9  and 0.9*100 = 90

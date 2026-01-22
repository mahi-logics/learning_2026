
// Integer Division

#include<iostream>

int main(){
    int correct = 9;
    int total = 10;
    double percentage = correct / total * 100;
    std::cout << percentage << "%";

    return 0;
}

// output: 0%

// "int / int = int" →→ Integer Devision
// 9(int) / 10(int) = 0 (int)
// 9 / 10 = 0.9   but it truncated '.9' because 9 and 10 both are integer so their division will be a integer (no decemel part is not allowed)
#include<iostream>

int main(){
    char operation;
    double num1;
    double num2;
    double result;

    std::cout << "Enter a operation (+ - * /): ";
    std::cin >> operation;

    std::cout << "Enter your 1st Number: ";
    std::cin >> num1;

    std::cout << "Enter your second Number: ";
    std::cin >> num2;

    switch(operation){

        case '+':
            result = num1 + num2;
            std::cout << result;
            break;
        case '-':
            result = num1 - num2;
            std::cout << result;
            break;
        case '*':
            result = num1 * num2;
            std::cout << result;
            break;  
        case '/':
            result = num1 / num2;
            std::cout << result;
            break;
        default:
            std::cout << "Enter a valid operation";
    }
}
#include<iostream>

int main(){
    char grade;
    std::cout << "Enter your grade: ";
    std::cin >> grade;

    switch(grade){
        
        case 'A':
            std::cout << "You did great!";
            break;
        case 'B':
            std::cout << "You did good.";
            break;
        case 'C':
            std::cout << "You did okay";
            break;
        case 'D':
            std::cout << "You did not do good";
            break;
        case 'F':
            std::cout << "You failed!";
            break;
        default:
            std::cout << "Enter a valid grade";
    }
}
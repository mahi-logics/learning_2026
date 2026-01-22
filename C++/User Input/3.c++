/*
cin >> leaves the newline character ('\n') in the input buffer when Enter is pressed.

getline() stops reading when it encounters '\n'.

Because of this, getline() may read no input.
*/

#include<iostream>

int main(){
    std::string name;
    int age;
    
    
    std::cout << "What is your age? ";
    std::cin >> age;

    std::cout << "What's your name? ";
    // std::getline(std::cin, name);
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hellow, " << name << '\n';
    std::cout << "You are " << age << " years old.";

    return 0;
}

// cout << (insertion operator)
// cin  >> (extraction operator)

#include<iostream>

int main(){
    std::string name;
    int age;
    

    std::cout << "What's your name? ";
    std::cin >> name;

    std::cout << "What is your age? ";
    std::cin >> age;

    std::cout << "Hellow, " << name << '\n';
    std::cout << "You are " << age << " old.";

    return 0;
}
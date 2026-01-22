/*
'std::cin >>' reads input only until a space.

If i enter a string with spaces (e.g. Saidur Mahi), it will store only the first word.

Example:

Input: Saidur Mahi

Stored value: "Saidur" 
*/

#include<iostream>

int main(){
    std::string name;
    int age;
    

    std::cout << "What's your name? ";
    // std::cin >> name;
    std::getline(std::cin, name);

    std::cout << "What is your age? ";
    std::cin >> age;

    std::cout << "Hellow, " << name << '\n';
    std::cout << "You are " << age << " years old.";

    return 0;
}


/*
To read a string with spaces, use:

getline(cin, name);

getline reads the entire line, including spaces.
*/
/*

The 'ternary operator' (?:) is a short replacement for an 'if–else' statement.

Syntax:

    condition ? expression1 : expression2;

How it works:

    If the condition is true, expression1 is executed.
    If the condition is false, expression2 is executed.

*/

#include<iostream>

int main(){
    int grade = 75;
    
    /*
        if (grade >= 60){
            std::cout << "You pass!";
        }else{
            std::cout << "You Fail!";
        }
    */
    
    /*
        grade >= 60 ? std::cout << "You Pass!" : std::cout << "You Fail!";
    */

    std::cout << (grade >= 60 ? "You Pass!" : "You Fail!");

    return 0;
}
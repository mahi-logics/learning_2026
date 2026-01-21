
/* 
Arithmetic operators → 
        return the result of a specific arithmetic operation (+ - * /)  
*/





// Addition

#include<iostream>

int main(){

    int boys = 15;

    boys = boys + 2;

    // short way
    boys += 2;

    // increment-operator (++) → add one (+1)
    boys++;

    std::cout << boys;
}





// Subtraction
int main(){

    int boys = 15;

    boys = boys - 2;

    // short way
    boys -= 2;

    // Decrement-operator (--) → subtract one (-1)
    boys--;

    std::cout << boys;
}




// multification

int main(){
    int students = 20;

    students = students * 2;

    // short way
    students *= 2;

    std::cout << students;
}





// division

int main(){
    int players = 20;

    players = players / 2;

    // short way
    players /= 2;

    std::cout << players;
}





// Modulus Operator ( % ) → collect reminder numbers of any division

int main(){
    int mens = 50;

    int reminder= mens % 7;
    std::cout << reminder;
}





/* Important Fact →→ Arithmetic operators have an order of precendence 

        1) parenthesis ()
        2) multipication & division 
        3) addition & subtraction

*/
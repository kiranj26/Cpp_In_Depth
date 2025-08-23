#include <iostream>

using namespace std;

int main(){
    // Valid  Identifiers
    int myVariable = 10; // Camel case
    int my_variable = 20; // Snake case
    int MyVariable = 30; // Pascal case
    int _myVariable = 40; // Leading underscore
    int myVariable123 = 50; // Alphanumeric with numbers
    int $myVariable = 60; // Dollar sign (not recommended in standard C++

    // Invalid Identifiers
    // int 123myVariable = 70; // Cannot start with a number
    // int my-variable = 80; // Hyphen is not allowed
    // int my variable = 90; // Spaces are not allowed
    // int my@Variable = 100; // Special characters are not allowed
    // int myVariable! = 110; // Exclamation mark is not allowed
    // int my variable! = 120; // Combination of invalid characters
    // int my-variable! = 130; // Combination of invalid characters
    
}

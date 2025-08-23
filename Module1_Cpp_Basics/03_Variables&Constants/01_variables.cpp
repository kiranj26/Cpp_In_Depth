#include <iostream>

using namespace std;

int main(){
    // Variables are used to store data that can change during program execution
    int age = 25; // Integer variable
    double height = 5.9; // Double variable for floating-point numbers
    char initial = 'A'; // Character variable
    string name = "Alice"; // String variable

    // Constants are fixed values that do not change
    const double PI = 3.14159; // Constant for the value of Pi

    // Output the variables and constant
    cout << "Name: " << name << endl;
    cout << "Initial: " << initial << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Value of Pi: " << PI << endl;

    // Variable declaration vs Defination vs Defination and Declaration
    int x; // Declaration
    x = 10; // Definition (initialization)
    int y = 20; // Declaration and Definition

    return 0;
}
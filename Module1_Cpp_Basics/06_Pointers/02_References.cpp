#include <iostream>
using namespace std;

int main(){
    // Creating and using a referense

    int value = 10;
    cout << "Value of Variable value = "<< value << endl;
    
    int & valueRef = value; // reference variable that refers to value variable
    // valueRef is another name for value

    // Changing ref variable changes original variable as well

    valueRef = 20;
    cout << "Value of Variable value after changing valueRef = "<< value << endl;
    cout << "Value of Reference variable valueRef = "<< valueRef << endl;

    // Must initialise a ref 
    // int& someRefVar;
    // Above line gives compilation error because reference variable must be initialized while declaration
    
    // No null ptr
    // int& nullRef = nullptr; // gives compilation error

    // NO reassignment

    int someVar = 30;
    int& someRef = someVar;
    // someRef = value; // This does not reassign reference, it assigns value of value to someVar
    // someref = 50; // This assigns 50 to someVar

    


}
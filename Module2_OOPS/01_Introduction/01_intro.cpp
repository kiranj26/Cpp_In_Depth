#include <iostream>
using namespace std;


// Basic structure of a class in C++
class className{;
    // data members
    // member functions
};

// Access Modifiers in a class
// 1. Public: Members declared as public are accessible from outside the class. By default all members are private.
// 2. Private: Members declared as private are accessible only within the class itself.
// 3. Protected: Members declared as protected are accessible within the class and by derived classes.
// Data menbers are usually private but member functions are ususally public


class myClass{

    private:
        int name {10}; // data member;
    public:
        string his_name; // data member
        void display(){ // member function
            cout << "Name: " << his_name << "\n";
        }
};

class mySTudents{
    int age;
    int roll_no;
    string name;
    public:
        void setData(int a, int r, string n){
            age = a;
            roll_no = r;
            name = n;
        }
        void displayData(){ 
            cout << "Name: " << name << ", Age: " << age << ", Roll No: " << roll_no << "\n";
        }
};
int main(void){
    // define an integer
    int num;

    // Simialrly define objeyt of calss className
    className obj;

    // Class objects accessible
    myClass obj1;
    obj1.his_name = "Kiran JOJOARERRRREEEE";
    obj1.display();




    mySTudents kiran;
    kiran.setData(26, 101, "Kiran Jojare");
    kiran.displayData();


    return 0;
}

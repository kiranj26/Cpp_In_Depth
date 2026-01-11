// like variables objects can be defines and can contains data of different variabkes and functions
// an object is an instance of a class

#include<iostream>
using namespace std;

// Class defination
// similar to functions or variables they need to be defined outside the main

class className{

    // data members
    // member functions
}; // semicolon is mandatory after class defination


class Kiran{
    // data members
    float salary;
    float balance;
    public:
        // member functions
        void printf_salary(){
            cout << "Salary is: " << salary << "\n";
        }
        void print_balance(){
            cout << "Balance is: " << balance << "\n";
        }

        void update_salary(float sal){
            salary = sal;
        }
        void update_balance(float bal){
            balance = bal;
        }
};
//////////////////
// Class modifiers
//////////////////
// public, private, protected
// used to restrict or provide access related problems to the classes member variables and member functions

// Class modifiers - Private
// by default all members of a class are private
// private members are accessible only within the class itself

// Class Modifiers - Public
// Public are directly accessible outside the class
// usually member functions are public
// reason being they provide interface to handle private members
// public memebers are accessed using dot (.) operator

// Class Modifiers - Protected
// Its a special case in between private and public members
//. We will go in detail in some other module when we will learn inheritance

class JojareFamily{
    int total_debt; // this is by default a private member
    private:  // you can also explicitly define a private variable too
        int total_members; // private member
        int house_no; // private member
        int total_income; // private member

    public:
        void setData(int debt, int members, int house, int income){
            total_debt = debt;
            total_members = members;
            house_no = house;
            total_income = income;
        }  

};

//////////////////
// Class Data Members
//////////////////
// Data members contains all the information stored in class
// They should be defined at the compile time
// They can be of any data type including user defined data types

// Example Student Class and Data members

class Student{
    private:
        int roll_no;
        int admit_no;
        string name;
        string address;
        char grades[10]; // grades of 10 subjects
    public:
        int age;
        float height;
        float weight;

        void setPhysicalAttributes(float h, float w){
            height = h;
            weight = w;
        }

        void setIdentity(int r, int a, string n, string addr){
            roll_no = r;
            admit_no = a;
            name = n;
            address = addr;
        }

        void displayIdentity(){
            cout << "Name: " << name << ", Roll No: " << roll_no << ", Admit No: " << admit_no << ", Address: " << address << "\n";
        }
        
        void displayPhysicalAttributes(){
            cout << "Age: " << age << ", Height: " << height << ", Weight: " << weight << "\n";
        }
};
//////////////////
// Class Data Members Initialization
//////////////////
// We have initialised variables data members to a default in the class
// Please note we cant define array members with default values in the class
class Circle{
    private:
        int radius = 1; // data member initialized to 1
        string mod = "default"; // data member initialized to default
        // int arr[] = {1,2,3,4,5}; // error: array data members cannot be initialized like this
        /////////////////////
        // IMPORTANT NOTE: //
        /////////////////////
        // NOTEEEEE : This above could work for local variables but not for the class data members
        // For embedded arrays use like this
        // std::array<int, 5> arr = {1,2,3,4,5};
        //////////////

        // uncommenting this will cause compilation error
        // becuase array data members cannot be initialized like this
        // if we declare array data members without providing size it will also cause error
    public:
        void setRadius(int r){
            radius = r;
        }
        int getRadius(){
            return radius;
        }
        float getArea(){
            return 3.14 * radius * radius;
        }
};

//////////////////
// Class Member Functions
//////////////////
// Functions defined inside the class are called member functions
// They are used to access and manipulate the data members of the class
// Mostly public member functions are used to provide interface to access private data members
// However member functions can also be private

class ractangle{
    int length;
    int breadth;

    public: 
        void getArea(){
            cout << "Area of rectangle is: " << length * breadth << "\n";
        }
        void setData(int l, int b){
            length = l;
            breadth = b;
        }
};
/////////////////////
// IMPORTANT NOTE: //
/////////////////////
// Scope resolution operator (::)
// Member functions can also be defined outside the class using scope resolution operator (::)
/// Example of using scope resolution operator on a rectangle class

class newrectangle{
    int length;
    int breadth;

    public:
        void setData(int l, int b);
        int getArea();

        void setLength(int l);
        void setBreadth(int b);

        int getLength();
        int getBreadth();
};

// format is return_type class_name :: function_name(parameters)
void newrectangle::setData(int l, int b){
    length = l;
    breadth = b;
}
int newrectangle::getArea(){
    return length * breadth;
}


// set and get functions for the data members using scope operator
void newrectangle::setLength(int l){
    length = l;
}
void newrectangle::setBreadth(int b){
    breadth = b;
}

int newrectangle::getLength(){
    return length;
}
int newrectangle::getBreadth(){
    return breadth;
}

/////////////////////
// IMPORTANT NOTE: //
/////////////////////
// OVERLOADING MEMBER FUNCTIONS
//// Member functions can be overloaded just like any other function. 
// This means that multiple member functions can exist with the same name on 
// the same scope, but must have different arguments.




///////////////////
// CONSTRUCTORS //
//////////////////
int main(void){
    // object of a class similar to a variable
    newrectangle obj1; // object of class newrectangle

    // Accesing the class members using object and public functions
    JojareFamily family1;
    family1.setData(500000, 5, 12, 200000);

    // accesing private memebers directly will cause error
    // family1.total_members = 10; // error: 'total_members' is a private member of 'JojareFamily'
    
    // Access datta member initilisation of class Circle
    Circle c1;

    cout << "Area of a circle with default radius " << c1.getRadius() << " is ::" << c1.getArea() << endl;
    // set radius ot a different value 
    c1.setRadius(5);

    cout << "Area of a circle with new radius " << c1.getRadius() << " is ::" << c1.getArea() << endl;
    return 0;
}




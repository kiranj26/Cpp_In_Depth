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

// Class modifiers
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


// Class Data Members
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
int main(void){
    // object of a class similar to a variable
    className obj1; // object of class className

    // Accesing the class members using object and public functions
    JojareFamily family1;
    family1.setData(500000, 5, 12, 200000);

    // accesing private memebers directly will cause error
    // family1.total_members = 10; // error: 'total_members' is a private member of 'JojareFamily'
    
    

    return 0;
}




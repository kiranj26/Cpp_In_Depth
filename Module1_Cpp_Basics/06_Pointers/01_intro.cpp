#include <iostream>

using namespace std;

int main(){

    int name;
    name = 20;
    cout<< "Value of name variable : "<<name<<endl;
    cout<< "Address of name variable : "<<&name<<endl;
    int* pName = &name; // pointer variable that stores address of name variable

    cout<< "Value of pName pointer variable : "<<pName<<endl;
    cout<< "Address of pName pointer variable : "<<&pName<<endl;
    cout<< "Value at address stored in pName pointer variable : "<<*pName<<endl;

    int* ptrName = nullptr; // pointer variable that stores address of name variable
    cout<< "Value of ptrName pointer variable : "<<ptrName<<endl;
    // Below code gives compilaton error because
    // 
    // int someVal = 0;
    // int* pSomeVal = someVal; // direct variable assignment intead of address assignment
    // cout<< "Value of pSomeVal pointer variable : "<<pSomeVal<<endl;

    char character = 'a';

    char* charPtr = &character;
    cout<< "Value of charPtr pointer variable : "<<charPtr<<endl;
    cout<< "Value at address stored in charPtr pointer variable : "<<*charPtr<<endl;
}
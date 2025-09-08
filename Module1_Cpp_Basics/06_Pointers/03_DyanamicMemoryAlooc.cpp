#include <iostream>
using namespace std;


int main(){
    // New reserves space in memory
    new int; // Allocates space for an integer in heap memory, but we have no way to access it
    int* p = new int; // Allocates space for an integer in heap memory and stores the address in pointer p
    *p = 10; // Assign value to allocated memory

    cout << "Value at address stored in pointer p = " << *p << endl;
    cout << "Address stored in pointer p = " << p << endl;
    cout << "Address of pointer p = " << &p << endl;

    // Delete frees up the memory allocated using new
    delete p; // Free the memory allocated to integer pointed by p
    p = nullptr; // Set pointer to nullptr after deleting the memory it points to

    // Lets reallocate p to point to something else
    int a = 20;
    p = &a; // Now p points to a stack variable a
    cout << "Value at address stored in pointer p = " << *p << endl;
    cout << "Address stored in pointer p = " << p << endl;
    cout << "Address of pointer p = " << &p << endl;

    ////////////////////////////////
    // Dyanimic Arrays (1D Array) //
    ////////////////////////////////

    // Allocating 1D Array of 5 integers
    int* arr = new int[5]; // Allocates space for 5 integers in heap memory and stores the address of first element in pointer arr

    // Assigning values to array
    for (int i = 0 ; i< 5 ; i++){
        arr[i] = i;

    }
    // Print dynamic Array
    for (int i = 0 ; i< 5 ; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
    // Delete dyamica arra
    delete[] arr; // Free the memory allocated to array pointed by arr
    arr = nullptr; // Set pointer to nullptr after deleting the memory it points to
    
    // Resizing the array dyanamically
    arr = new int[10]; // Allocates space for 10 integers in heap memory
    for (int i = 0 ; i< 10 ; i++){
        arr[i] = i * 10;    
    }
    // Print dynamic Array
    for (int i = 0 ; i< 10 ; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;

    int * newArr = new int[12]; // New array of 15 integers
    // Copy old array to new array
    for (int i = 0 ; i< 10 ; i++){
        newArr[i] = arr[i];
    }
    // Delete old array
    delete[] arr;
    arr = nullptr;

    // Point arr to new array
    arr = newArr; // Point arr to new array
    arr[10] = 100;
    arr[11] = 110;

    // Print dynamic Array
    for (int i = 0 ; i< 12 ; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
    
    ////////////////////////////////
    // Dyanimic Arrays (2D Array) //
    ////////////////////////////////
    
    return 0;
}


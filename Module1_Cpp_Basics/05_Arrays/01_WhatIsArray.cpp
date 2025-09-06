// In C we have something like array not in built 1d 2d but in C++ wer have some thing called as std::array and std::vector on top of C style arrays

// Example to store 5 variable called score fo 5 students
// int scores[5] = {1,2,3,4,5}; // C style array


#include <iostream>
using namespace std;


void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
// NOTE : So a function must know the column count to step from one row to the next correctly.
void print2DArray(int arr[][3], int rows){
    for (int i = 0 ; i < rows;i++){
        for(int j = 0; j < 3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void modifyArray(int arr[], int modifyValue){
    for(int i=0; i<5; i++){
        arr[i] = modifyValue;
    }
}

void modifiy2DArray(int arr[][3], int rows, int modifyValue){
    for (int i = 0 ; i < rows;i++){
        for(int j = 0; j < 3; j++){
            arr[i][j] = modifyValue;
        }
    }

}
int main(){

    int arr[5] = {1,2,3,4,5}; // C style array

    printArray(arr, 5);

    modifyArray(arr,-10);
    cout<< "After modifications" <<endl;
    printArray(arr, 5);



    // 2D Array
    int arr1[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    print2DArray(arr1, 3);
    // chang single array value

    arr1[1][1] = -10;
    cout<< "After modifications" <<endl;
    print2DArray(arr1, 3);
}
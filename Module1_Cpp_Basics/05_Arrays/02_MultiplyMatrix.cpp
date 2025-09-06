#include <iostream>
using namespace std;


// print 2D array
void print2DArray(int** arr, int rows, int cols){
    for (int i = 0 ; i < rows;i++){
        for(int j = 0; j < cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void multiplication(int** arr1, int row1, int col1, int** arr2, int row2, int col2, int** result){
    // Multiplication logic
    if (col1 != row2){
        cout<<"Matrix multiplication not possible"<<endl;
        return;
    }
    for (int i = 0; i < row1; i++){
        for (int j = 0; j < col2; j++){
            result[i][j] = 0; // Initialize result cell
            for (int k = 0; k < col1; k++){
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}

int main(void){
    int arr1_data[2][2] = {
        {1,2},
        {5,6}
    };
    int arr2_data[2][2] = {
        {10,20},
        {-20,70}
    };
    int result_data[2][2] = {
        {-1,-1},
        {-1,-1}
    };

    // Create pointers for 2D arrays
    int* arr1[2] = {arr1_data[0], arr1_data[1]};
    int* arr2[2] = {arr2_data[0], arr2_data[1]};
    int* result[2] = {result_data[0], result_data[1]};

    multiplication(arr1, 2, 2, arr2, 2, 2, result);

    print2DArray(result, 2, 2);
}
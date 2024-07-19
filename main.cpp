#include <iostream>
#include "fill_3x3_matrix.h"
#include "print_3x3_matrix.h"
#include "fill_transpose_matrix.h"
#include "print_transpose_matrix.h"

using namespace std;

/*
    1- Fill a 3x3 matrix with orderd num
    2- Print it 
    3- transpose matrix ==> convert row to col
    4- print it 

*/

int main(){

    int arr[3][3]; // declartion 
    int arrTransposed[3][3];
    short rows = 3;
    short cols = 3;

    // Fill and print 3x3 matrix 
    Fill3x3Matrix(arr, rows, cols);
    cout << "\nFill and print orderd matrix: \n";
    Print3x3Matrix(arr, rows, cols);
    
    cout << "\nTranspose Matrix : \n";

    // FIll and print transpose 3x3 matrix 
    FillTransposeMatrix(arr, arrTransposed, rows, cols);
    PrintTransposeMatrix(arr, arrTransposed, rows, cols);


    return 0;
}


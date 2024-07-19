#include <iostream>
#include "nested_print_transpose_matrix.h"
using namespace std;

#pragma once 

void PrintTransposeMatrix(int arr[3][3], int arrTransposed[3][3], short rows, short cols)
{   
    for ( short i = 0; i < rows; i++)
    {
      NestedPrintTransposeMatrix(arr, arrTransposed, rows, cols, i);
    
    }
    

}

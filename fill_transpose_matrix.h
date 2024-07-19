#include <iostream>
#include "nested_fill_transpose_matrix.h"

using namespace std;

#pragma once 

void FillTransposeMatrix(int arr[3][3], int arrTransposed[3][3], short rows, short cols)
{   
    for (short i = 0; i < cols; i++)
    {
      NestdFillTransposeMatrix(arr, arrTransposed, rows, cols, i);
        
    }
    

}
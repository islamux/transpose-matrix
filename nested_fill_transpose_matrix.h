#include <iostream>
#pragma oncee
using namespace std;

void NestdFillTransposeMatrix(int arr[3][3], int arrTransposed[3][3], short rows, short cols, short i)
{
      // print one col from many rows
        for (short j = 0; j < rows; j++)
        {
            
            arrTransposed[i][j] =  arr[j][i];
               }
}
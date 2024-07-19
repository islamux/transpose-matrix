#include <iostream>
#pragma once
using namespace std;

void NestedPrintTransposeMatrix(int arr[3][3], int arrTransposed[3][3], short rows, short cols, short i)
{
      for (short j = 0; j < cols; j++)
        {
            cout << arrTransposed[i][j] << " ";
        }
        cout << "\n";
}
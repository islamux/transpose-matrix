#include <iostream>
using namespace std;

#pragma once 

void Print3x3Matrix(int arr[3][3], short rows, short cols){

    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            
            cout <<  arr[i][j] << " ";
        }
        cout << "\n";
    }
    
}
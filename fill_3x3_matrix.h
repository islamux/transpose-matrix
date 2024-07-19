#include <iostream>
using namespace std;

#pragma once 

void Fill3x3Matrix(int arr[3][3], short numOfRows, short cols){

    short counter = 0;
    for (short i = 0; i < cols; i++)
    {
        // print one column
        for (short j = 0; j < numOfRows; j++)
        {
            counter++ ;
            arr[i][j] = counter;
        }
        
    }
    
    
}
//
//  45. Row Major and Column Major.cpp
//  DSA in C and C++
//
//  Created by Lester Dann Lopez on 11/11/24.
//

#include <iostream>
using namespace std;

int * getAddress_using_row_formula(int * A, int i, int j, int n){
    return A + (i * n + j);
}

int main(){
    int n = 4; //size of cols
    int i = 2; //row index
    int j = 3; //Cols index
    
    int A[3][4]= {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    
    int *address = getAddress_using_row_formula(&A[0][0],i, j, n);
    
    cout << "The Address of A[" << i << "][" << j << "] is " << *address << endl;
    
    
}

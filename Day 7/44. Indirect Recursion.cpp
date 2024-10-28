//
//  44. Indirect Recursion.cpp
//  DSA in C and C++
//
//  Created by Lester Dann Lopez on 10/28/24.
//

#include <iostream>
using namespace std;

void funA(int n);
void funB(int n);


int main(){
    funA(20);
}

void funA(int n){
    if(n > 0){
        cout << n << " ";
        funB(n - 1);
    }
}

void funB(int n){
    if(n > 0){
        cout << n << " ";
        funA(n / 2);
    }
}

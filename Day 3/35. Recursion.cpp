//
//  35. Recursion.cpp
//  DSA in C and C++
//
//  Created by Lester Dann Lopez on 10/24/24.
//

#include <iostream>
using namespace std;

void fun(int x){
    if(x > 0){
        cout << x << " ";
        fun(x - 1);
    }
}

void fun2(int x){
    if(x > 0){
        fun2(x - 1);
        cout << x << " ";
    }
}


int main(){
    int num = 3;
    fun(num);
    cout << endl;
    fun2(num);
    
}

//
//  43. Tree Recursion.cpp
//  DSA in C and C++
//
//  Created by Lester Dann Lopez on 10/25/24.
//

#include <iostream>
using namespace std;

void fun(int n){
    if(n > 0){
        fun(n - 1);
        cout << n << " ";
        fun(n - 2);
        fun(n - 1);
    }
}

int main(){
    fun(3);
    cout << endl;
}

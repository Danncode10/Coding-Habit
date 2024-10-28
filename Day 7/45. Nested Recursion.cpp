//
//  45. Nested Recursion.cpp
//  DSA in C and C++
//
//  Created by Lester Dann Lopez on 10/28/24.
//

#include <iostream>
using namespace std;

int fun(int n){
    if(n > 100){
        return n - 10;
    }
    else{
        return fun(fun(n - 1));
    }
}

int main(){
    cout << fun(95);
}

//
//  40. Static Variable in Recursion.cpp
//  DSA in C and C++
//
//  Created by Lester Dann Lopez on 10/25/24.
//

#include <iostream>

using namespace std;

//No Static Variable:

int fun(int n){
    if (n > 0){
        return fun(n-1) + n;
    }
    return 0;
}

//With Static

int fun2(int n){
    static int x = 0;
    if (n > 0){
        x++;
        return fun2(n-1) + x;
    }
    return 0;
}

int main(){
    int a = 5;
    cout << fun(a) << endl;
    cout << fun2(a) << endl;
}

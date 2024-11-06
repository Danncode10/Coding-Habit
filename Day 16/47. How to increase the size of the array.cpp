
#include <iostream>
using namespace std;

void displayArray(int *x, int size){
    for(int i = 0; i < size; i++){
        cout << *(x+i) << ", ";
    }
    cout << endl;
}

void increase_array_size(int *&p, int setSize){ // *&, pass by reference, pero pointer yung pina pass kaya dapat *(&p)
    //Create a new array in heap
    int *q = new int[setSize];
    
    //Copy original pointer to new Pointer
    for(int i = 0; i < setSize; i++){
        q[i] = p[i];
    }
    //delete value of p
    delete []p;
    
    //point p to q
    p = q;
    //makes q points to nothing
    q = NULL;
    
}

int main(){
    
    //Default array
//    int x[5] = {1,2,3,4,5};
    int *x = new int[5];
    for(int i = 0; i < 5; i++){
        x[i] = i+1;
    }
    
    cout << "Original Array: \n";
    displayArray(x, 5);
    
    //Increase the size of Array to 10
    increase_array_size(x, 10);
    cout << "New Size Array: \n";
    displayArray(x, 10);
    
}

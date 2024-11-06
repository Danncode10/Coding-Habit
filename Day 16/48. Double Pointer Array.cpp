
#include <iostream>
using namespace std;

int main(){
    int **A = new int*[3]; //
    for(int i = 0; i < 3; i++){
        A[i] = new int[4];
    }
    
    //Set Values
    int k = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            A[i][j] = k;
            k++;
        }
    }
    
    //Print Array
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    
    delete []A;
}

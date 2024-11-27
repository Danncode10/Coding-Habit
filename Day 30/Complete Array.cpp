//
//  Complete Array.hpp
//  DSA in C and C++
//
//  Created by Lester Dann Lopez on 11/27/24.
//

#include <iostream>
using namespace std;

class Array{
public:
    int size;
    int length;
    int *arr;
    
    Array(int size){
        this->size = size;
        length = 0;
        arr = new int[size];
    }
    
    /*
     1. Display ✅
     2. Add/ Apppend ✅
     3. Insert ✅
     4. Delete ✅
     5. Search ✅
     6. get ✅
     7. set ✅
     8. max()/ min() ✅
     9. Reverse() ✅
     10. Shift() / Rotate() ✅
     
     */
    
    void display(){
        for(int i = 0; i < length; i++){
            cout << arr[i] << ", ";
        }
        cout << endl;
    }
    
    void add(int x){
        if(length < size){
            arr[length] = x;
            length++;
        }
        else{
            cout << "Array is full. " << endl;
        }
    }
    
    void append(int x){
        add(x);
    }
    
    void insert(int index, int value){
        for(int i = length; i > index; i--){
            arr[i] = arr[i-1];
        }
        arr[index] = value;
        length++;
    }
    
    void Delete(int index){
        for(int i = 0; i < length - 1; i++){
            arr[i] = arr[i+1];
        }
        length--;
    }
    
    //Swap fun needed for search
    void swap(int i, int j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
    //Linear Search
    int search(int key){
        for(int i = 0; i < length; i++){
            if(arr[i] == key){
                swap(i, i-1); //Transposition, frequent search move index below,
                return i;
            }
        }
        //Search not found
        cout << key << " not in array." << endl;
        return -1;
    }
    
    int get(int index){
        if(index >= 0 && index < length){
            return arr[index];
        }
        else{
            cout << "Invalid Index. " << endl;
            return -1;
        }
    }
    
    void set(int index, int x){
        if(index >= 0 && index < length){
            arr[index] = x;
        }
        else{
            cout << "Invalid index. " << endl;
        }
    }
    
    int max(){
        if(length == 0){
            cout << "Arary is empty. " << endl;
            return -1;
        }
        int max_val = arr[0];
        for(int i = 1; i < length; i++){
            if(arr[i] > max_val){
                max_val = arr[i];
            }
        }
        return max_val;
    }
    
    int min(){
        if(length == 0){
            cout << "Arary is empty. " << endl;
            return -1;
        }
        int min_val = arr[0];
        for(int i = 1; i < length; i++){
            if(arr[i] < min_val){
                min_val = arr[i];
            }
        }
        return min_val;
    }
    
    void reverse(){
        for(int i = 0; i < length/2; i++){
            swap(i, length - 1 - i);
        }
    }
    
    void shift(){
        if(length > 0){
            int first = arr[0];
            for(int i = 1; i <  length; i++){
                arr[i - 1] = arr[i];
            }
            arr[length - 1] = first;
        }
    }
    
    void rotate(){
        shift();
    }
    
    
    
};


int main(){
    //Make arr
    int s;
    cout << "Enter Size of the Array: ";
    cin >> s;
    
    Array a(s);
    
    a.add(10);
    a.add(11);
    a.add(3);
    a.add(4);
    
    a.display();
    
    a.insert(2, 8);
    
    a.display();
    
    a.Delete(2);
    a.display();
    
    //Search
    a.search(4);
    a.display();
    
    //Get
    cout << a.get(0) << endl;
    
    //set
    a.set(0, 33);
    a.display();
    
    //max and min
    cout << a.max() << endl;
    cout << a.min() << endl;
    
    //reverse
    a.reverse();
    a.display();
    
    //shift
    a.shift();
    a.display();
    
    
}

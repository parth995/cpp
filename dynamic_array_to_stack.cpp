//
//  dynamic_array_to_stack.cpp
//  cpp_master
//
//  Created by PARTH PATEL on 18/04/21.
//

//#include <stdio.h>
#include <climits>

class StackUsingArray {
    int *data;  // creating dynamic array as we dont know size : int *data = new int[10]; we will take size from user using parameterized constructor....
    //as we are using array to implement stack....we dont want to allow users or anyone to access array values from any index....so keeping it under private access modifiers as default.
    //dynamic array = we define some value on fly, once that array is full dynamic array expand its size by doubling it....
    int nextIndex;
    int capacity;
    
    public:
    
    StackUsingArray() {
       // data = new int[totalSize]; //initialize array we defined above - in static case
        data = new int[4]; //initialize array we defined above - in dynamic case
        nextIndex = 0;
        capacity = 4; // as we cant access totalsize var outside this scope, bcz its used by constructor. we have created other var
    }
    //return the number of elements present in my stack
    int size(){
        return nextIndex;
    }
    
    bool isEmpty(){
        /*if(nextIndex == 0){
            return true;
        }
        else{
            return false;
        }
         */
        return nextIndex == 0;
    }
    
    //insert element
    void push(int element) {
        if(nextIndex == capacity) {
            //once stack is full we will double array size. Copy array from old to new array.
            int *newData = new int[2 * capacity];
            for(int i = 0; i < capacity; i++){
                newData[i] = data[i];
            }
            capacity *= 2;
            delete [] data; //delete original array named data
            data = newData;
//            cout << "stack full" << endl;
//            return;
        }
        data[nextIndex] = element; //place element at nextIndex
        nextIndex++; //increase value as we added one element
    }
    
    //delete element
    int pop() {
        if(isEmpty()){ //check and take action if stack doesn't went empty
            cout << "stack is empty" << endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
    
    //get top element
    int top(){
        if(isEmpty()){ //check and take action if stack doesn't went empty
            cout << "stack is empty" << endl;
            return INT_MIN;
        }
        return data[nextIndex - 1];
    }
    
};

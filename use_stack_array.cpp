//
//  use_stack_array.cpp
//  cpp_master
//
//  Created by PARTH PATEL on 18/04/21.
//

#include <stdio.h>
#include <iostream>
using namespace std;
//#include "stackusingarray.cpp"
#include "dynamic_array_to_stack.cpp"
#include "stack_using_ll.cpp"


int main(){
    //StackUsingArray s(4); //pass custom value based on user
    StackUsingArray s;  //use this in dynamic array
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50); // as capacity in dynamic array is 4, it doubles array size as and when required on demand  
    
    cout << s.top() << endl;
    
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    
    cout << s.size() << endl;
    
    cout << s.isEmpty() << endl;
}

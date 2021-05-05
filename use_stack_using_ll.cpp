//
//  use_stack_using_ll.cpp
//  cpp_master
//
//  Created by PARTH PATEL on 20/04/21.
//

#include <stdio.h>
#include <iostream>
using namespace std;
#include "stack_using_ll.cpp"

int main(){
    Stack<char> s;  //use this in dynamic array
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104); // as capacity in dynamic array is 4, it doubles array size as and when required on demand
    
    cout << s.top() << endl;
    
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    
    cout << s.getSize() << endl;
    
    cout << s.isEmpty() << endl;
}

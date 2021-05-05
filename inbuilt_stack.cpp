//
//  inbuilt_stack.cpp
//  cpp_master
//
//  Created by PARTH PATEL on 20/04/21.
//

#include <stdio.h>
#include <iostream>
using namespace std;
#include "stackusingarray.h" // .h file doesnt have main function

#include <stack> //used to create inbuilt stack rather defining on own

//stack<int> s1;
//old fashioned --> new fashioned(using inbuilt stack)
//
//push(T element) -> s1.push(10);
//T pop(); -> void pop()
//T top(); -> s1.pop();
//size -> size()
//isEmpty() -> bool empty() //diff name for inbuilt stack

int main() {
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    
    cout << s.size() << endl;
    cout << s.empty() << endl;
}

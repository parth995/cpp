//
//  balanced_stack.cpp
//  cpp_master
//
//  Created by PARTH PATEL on 20/04/21.
//

#include <stdio.h>
#include <stack>

bool isBalanced(string expression){
    stack<char> stk;
    
    for(int i = 0; i < expression.length(); i++){
        if(expression[i] == '('){
            stk.push(expression[i]);
        }
        else if(expression[i] == ')'){
            if(stk.empty()){
                return false;
            }
            
            char topChar = stk.top();
            stk.pop();
            if(expression[i] == ')' && topChar == '('){
                continue;
            }
            else{
                return false;
            }
    }
        return stk.empty();
}

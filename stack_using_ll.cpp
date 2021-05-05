//
//  stack_using_ll.cpp
//  cpp_master
//
//  Created by PARTH PATEL on 20/04/21.
//

#include <stdio.h>
#include <iostream>
using namespace std;
template <typename T>

class Node {
public:
    T data;
    Node<T> *next; //create next node of desired data type during run time
    
    Node(T data) {
        this -> data = data;
        next = NULL;
    }
};

template <typename T> //define this line for each class
class Stack {
    Node<T> *head; //using node for LL
    int size; //store number of elements in stack
    
public:
    Stack() { //constructor initializes data members
        head = NULL;
        size = 0;
    }
    
    int getSize() {
        return size;
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    void push(T element) {
        Node<T> *newNode = new Node<T>(element); //create node dynamically
        newNode -> next = head;
        head = newNode;
        size++;
    }
    
    T pop() {
        if(isEmpty()) {
            return 0; //do nothing if node is empty
        }
        T ans = head -> data; //segmentation fault can occur here if we try to access null data and without if loop added above
        Node<T> *temp = head; //temporary pointer to store the address of head before deleting node
        head = head -> next;
        delete temp;
        size--;
        return ans;
    }
    
    T top() {
        if(isEmpty()){
            return 0;
        }
        return head -> data;
    }
    
};

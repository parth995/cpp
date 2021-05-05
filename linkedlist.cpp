#include <iostream>
using namespace std;
#include "node.cpp"

//Node* takeInput() {  //complexity O(n2)
//    int data;
//    cin >> data;
//    Node *head = NULL;
//    while(data != -1) {
//        Node *newNode = new Node(data);
//        if(head == NULL) {
//            head = newNode;
//        }
//        else {
//            Node *temp = head;
//            while(temp -> next != NULL) {
//                temp = temp -> next;
//            }
//            temp -> next = newNode;
//        }
//
//        cin >> data;
//    }
//    return head;
//}

//Below snippet to improve complexity of code... O(n)
Node* takeInpu_Better() {
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1) {
        Node *newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail -> next = newNode;
            tail = tail -> next;
            // OR
            // tail = newNode;
        }

        cin >> data;
    }
    return head;
}

//insert node at ith position
Node* insertNode(Node *head, int i, int data){
    Node *newnode = new Node(data);
    int count = 0;
    Node *temp = head;
    
    //adding node at index 0
    if(i == 0){
        newnode -> next = head;
        head = newnode;
        return head;
    }
    
    while(temp != NULL && count < i-1){
        temp = temp -> next;
        count++;
    }
    if(temp != NULL){
        //method 1 - create new node to store address of 3rd node
        Node *a = temp -> next; //stores address of 2nd node before adding
        temp -> next = newnode; //points address of i-1 node to newnode
        newnode -> next = a; //store address in newnode for 2nd node stored in a
        
        //method 2 - no extra node created like 'a'
    //    newnode -> next = temp -> next;
    //    temp -> next = newnode;
    }
    return head;
}

//delete node at ith position
Node *deleteNode(Node *head, int pos){
    if(head == NULL){
        return head;
    }
    if(pos == 0){
        return head->next;
    }
    Node *curr = head;
    int currPos = 0;
    
    while(curr != NULL && currPos < pos - 1){
        ++currPos;
        curr = curr -> next;
    }
    
    if(curr == NULL || curr -> next == NULL){
        return head;
    }
    
    curr -> next = curr -> next -> next;
    return head;
}

//reverse linkedlist
Node* reverseLL(Node *head){
    if(head == NULL || head -> next == NULL) {
        return head;
    }
    
    Node *smallAns = reverseLL(head -> next); //n-1 sized list is reversed using this....
    
    Node *temp = smallAns;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    
    temp -> next = head;
    head -> next = NULL;
    return smallAns;
}


void print(Node *head) {
    while(head != NULL) {
        cout << head -> data << " ";
        head = head -> next;
    }
}

int main() {

    Node *head = takeInpu_Better();
    print(head);
    int i, data;
    cin >> i >> data;
    head = insertNode(head, i, data);
    print(head);
    reverseLL(head);
    print(head);

    /*
    // Statically
    Node n1(1);
    Node *head = &n1;

    Node n2(2);

    Node n3(3);
    Node n4(4);
    Node n5(5);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    print(head);

ee    print(head);
    */
    /*
    // Dynamically
    Node *n3 = new Node(10);
    Node *head = n3;
    
    Node *n4 = new Node(20);
    n3 -> next = n4;

    */

}


/*
 for n nodes, iterations
 
 1=k (constant)
 2=1
 3=2
 4=3
 .
 .
 n=n-1
 
 */

/*
Reverse a linked list 
Given a linked list of N nodes,reverse this list.
The last node must be the head after the operation.
*/

#include<iostream>


struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 
typedef struct Node Node;

int main()
{
    return 0;
}

int detectLoop(Node* list)
{
    Node *slow_p = list, *fast_p = list;
 
    while (slow_p && fast_p && fast_p->next) {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
        if (slow_p == fast_p) {
            return 1;
        }
    }
    return 0;
}

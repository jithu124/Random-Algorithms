/*
Reverse a linked list 
Given a linked list of N nodes,reverse this list.
The last node must be the head after the operation.
*/

#include<iostream>

typedef struct Node Node;
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 

int main()
{
    return 0;
}

struct Node* reverseList(struct Node *head)
{
        struct Node *r = NULL;
        struct Node * temp = head;
        struct Node * s;
        
        while(temp)
        {
           s = temp->next;
           temp->next = r;
           r = temp;
           temp = s;
        }
        
        return r;
}

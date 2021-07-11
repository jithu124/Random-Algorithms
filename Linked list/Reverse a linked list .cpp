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

Node* rotate(Node* head, int k)
{
    
        struct Node * temp = head;
        int N=0;
        int i = k-1;
        while(temp)
        {
            N++;
            temp=temp->next;
        }

        temp = head;
        while(i>0)
            {
                temp = temp->next;
                i--;
            }
            
        struct Node * New_head = temp->next;
        
        if(New_head == NULL)
        {
            return head;
        }
        struct Node * end = temp;
       
        while(temp->next)
        {
            temp = temp->next;
        }
        temp->next = head;
        
        end->next = NULL;
        
        return New_head;
        
}


/*
  Pairwise swap a linked list
  The input list will have at least one element
  node is defined as below
  Given a singly linked list of size N. The task is to swap elements in the linked list pairwise.
  For example, if the input list is 1 2 5 6, the resulting list after swaps will be 2 1 6 5.*/

#include<iostream>

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};

int main()
{
    return 0;
}

struct Node* pairWiseSwap(struct Node* head) 
{
        
        if(head == NULL)
        {
            return NULL;
        }
        struct Node* prev = NULL, *current = head, *next;
        int i = 0;
       
        while(current && (i<2))
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
            i++;
            
        }
        
        if(next)
        {
            head->next = pairWiseSwap(next);
        }
        
        return prev;
        
}

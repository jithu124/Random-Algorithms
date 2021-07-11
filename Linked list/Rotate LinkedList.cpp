/*
Rotate a Linked List
Given a singly linked list of size N, rotate the linked list counter-clockwise by k nodes,
 where k is a given positive integer smaller than or equal to length of the linked list.
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

int main()
{
    return 0;
}

struct Node * rotate(Node* head, int k)
    {
        // Your code here
        struct Node * temp = head;
        int N=0;
        int i = k-1;
        while(temp)
        {
            N++;
            temp=temp->next;
        }
        /*
        if(N==k)
        {
            return head;
        }*/
        //out<<"N is"<<N;
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
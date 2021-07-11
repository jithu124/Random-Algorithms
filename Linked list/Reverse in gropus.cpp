/*
Reverse a linked list Reverse a Linked List in groups of given size
Given a linked list of size N. The task is to reverse every k nodes (where k is an input to the function) in the linked list.
*/

#include<iostream>


struct node {
    int data;
    node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
}; 

int main()
{
    return 0;
}

struct node *reverse (struct node *head, int k)
{ 
        
        if(!head)
        {
            return NULL;
        }
     
        struct node *current_node = head;
        int i = 0;
        struct node * previous_node =NULL;
        struct node *next_node = NULL;
       
            while(i<k && current_node)
            {   next_node= current_node->next;
                current_node->next  =previous_node;
                previous_node = current_node;
                current_node =next_node;
                i++;
                
            }
            
            if(next_node !=NULL)
             {
                 head->next = reverse(next_node,k);
             }
           
            
        
        
        return previous_node;
        
}

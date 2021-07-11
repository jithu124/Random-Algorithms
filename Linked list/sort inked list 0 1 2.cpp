/*
sort linked list of  0s, 1s and 2s
Given a linked list of N nodes where nodes can contain values 0s, 1s, and 2s only, segregate 0s, 1s, and 2s 
linked list such that all zeros segregate to head side, 2s at the end of the linked list, and 1s in the mid of 0s and 2s.
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

Node* segregate(Node *head) {
        int count[3] = {0,0,0};
        Node * temp = head;
        while(temp)
        {
           count[temp->data] +=1; 
           temp = temp->next;
        }
        //cout<<"count1 "<<count[0]<<"\n";
        //cout<<"count2 "<<count[1]<<"\n";
        //cout<<"count3 "<<count[2]<<"\n";
        
        int i = 0;
        temp = head;
        
        while(temp)
        {
            if(count[i]==0)
            {
                i++;
            }
            else
            {
                temp->data = i;
                --count[i];
                temp = temp->next;
            }
        }
        
        return head;
        
      
    }
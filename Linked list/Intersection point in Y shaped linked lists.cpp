/*
Intersection Point in Y Shapped Linked Lists 
Given two singly linked lists of size N and M, program to get the point where two linked lists intersect each other.
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

int intersectPoint(Node* head1, Node* head2)
{
   
    int result =-1;
    struct Node * temp1 = head1, *temp2 = head2;
    int d=0, count1=0,count2=0;
    while(temp1)
    {
        temp1 = temp1->next;
        count1++;
    }
    //cout<<"count1 is"<<count1<<"\n";
    
    while(temp2)
    {
        temp2 = temp2->next;
        count2++;
    }
    //cout<<"count2 is"<<count2<<"\n";
    d = count1-count2;
    //cout<<"d is"<<d<<"\n";
    if(d>0)
    {
        temp1 = head1;
        temp2 = head2;
    }
    else
    {
        temp1 = head2;
        temp2 = head1;
    }
    
    int i = abs(d);
    while(i>0)
    {
        temp1 = temp1->next;
        i--;
    }
    //cout<<"head is"<<temp1->data<<"\n";
    
    while(temp1 && temp2)
    {
        if(temp1==temp2)
        {
            return temp1->data;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    
    
    return -1;
    //cout<<"d is"<<d;
    
    
  
     
     
}

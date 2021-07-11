/*
Delete without head pointer
You are given a pointer/ reference to the node which is to be deleted from the linked list of N nodes. 
Delete the node. Pointer/ reference to head node is not given. 
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

void deleteNode(Node *del)
{
       Node * temp;
       del->data = del->next->data;
       temp = del->next;
       del->next = del->next->next;
       free(temp);
       
}
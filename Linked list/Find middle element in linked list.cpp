/*
Finding middle element in a linked list 
Given a singly linked list of N nodes. The task is to find the middle of the linked list. 
For example, if given linked list is 1->2->3->4->5 then the output should be 3.
If there are even nodes, then there would be two middle nodes, 
we need to print the second middle element. For example, if given 
linked list is 1->2->3->4->5->6 then the output should be 4.
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

/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
   struct Node * fast = head;
   struct Node * slow = head;
   
   
  
   while((fast !=NULL)&&(fast->next!=NULL))
   {
       fast = fast->next->next;
       slow = slow->next;
   }
   
   return  slow->data;
     
}


/*Another function to find the middle element*/
int getMiddle2(Node *head)
{
   // Your code here
   struct Node * temp;
   int n=0;
   
   temp = head;
   while(temp)
   {
       n++;
       temp = temp->next;
   }
  
   
   temp = head;
   int i = n/2;
   while(i>0)
   {
      temp = temp->next; 
      i--;
   }
   
   if(n==1)
   {
       return head->data;
   }
   else
   {
       return temp->data;
   }
   
  
   
}

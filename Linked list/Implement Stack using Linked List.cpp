/*
Implement Stack using Linked List
You have a linked list and you have to implement the functionalities push and pop of stack using this given linked list. 
Your task is to use the class as shown in the comments in the code editor and complete the functions push() and pop() to implement a stack. 
*/

#include <bits/stdc++.h>
using namespace std;

struct StackNode {
    int data;
    StackNode *next;
    StackNode(int a) {
        data = a;
        next = NULL;
    }
};

class MyStack {
  private:
    StackNode *top;

  public:
    void push(int);
    int pop();
    MyStack() { top = NULL; }
};

int main() {

    return 0;
}



//Function to push an integer into the stack.
void MyStack ::push(int x) 
{
    // Your Code
    struct StackNode * ptr =  (struct StackNode*)malloc(sizeof(struct StackNode));
    ptr->data = x;
    ptr->next = top;
    top = ptr;
}
//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    int res;
    // Your Code
    if(top != NULL)
    {
        res = top->data;
        struct StackNode* temp = top;
        top = top->next;
        free(temp);
    }
    else
    {
        res = -1;
    }
    return res;
}



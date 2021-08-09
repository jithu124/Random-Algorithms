//The program is to perform the Preorder, inorder and Postorder transversal of a binary tree

#include<iostream>
#include<stack>
using namespace std;

typedef struct Node {
    int data;
    Node * left;
    Node * right;

    Node(int d):data(d),left(NULL),right(NULL){}
} Node;


void printInorder(Node * root)
{
    if(root)
    {
        printInorder(root->left);
        cout <<root->data<<" ";
        printInorder(root->right);
       
    }
    
}

void printInorder_Stack(Node *root)
{
 Node * current = root;
 stack<Node *> s;

 while(current != NULL || s.empty()==false)
 {
     while(current !=NULL)
     {
         s.push(current);
         current = current->left;
     }

     current = s.top();
     cout<<current->data<<" ";
     s.pop();
     current = current->right;

 }
    cout<<"\n";

}


int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
 
   
 
    cout << "\nInorder traversal of using recursion is binary tree is \n";
    printInorder(root);

    cout << "\nInorder traversal of using Stack is binary tree is \n";
    printInorder_Stack(root);
 
  
 
    return 0;
}
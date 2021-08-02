//The program is to perform the Preorder, inorder and Postorder transversal of a binary tree

#include<iostream>
using namespace std;

typedef struct Node {
    int data;
    Node * left;
    Node * right;

    Node(int d):data(d),left(NULL),right(NULL){}
} Node;

void printPreorder(Node * root)
{
    if(root)
    {
       cout <<root->data<<" ";
       printPreorder(root->left);
        printPreorder(root->right);
    }
    
}
void printInorder(Node * root)
{
    if(root)
    {
        printInorder(root->left);
        cout <<root->data<<" ";
        printInorder(root->right);
       
    }
    
}

void printPostorder(Node * root)
{
    if(root)
    {
       
       printPostorder(root->left);
       printPostorder(root->right);
       cout <<root->data<<" ";
    }
    
}


int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
 
    cout << "\nPreorder traversal of binary tree is \n";
    printPreorder(root);
 
    cout << "\nInorder traversal of binary tree is \n";
    printInorder(root);
 
    cout << "\nPostorder traversal of binary tree is \n";
    printPostorder(root);
 
    return 0;
}
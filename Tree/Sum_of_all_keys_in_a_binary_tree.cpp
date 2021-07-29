//This is a program to find the sum of all keys of nodes in a binary tree

#include<iostream>

using namespace std;

typedef struct Node {
 int key;
 Node * left, * right;
} Node;

Node * newNode(int data)
{
    Node * temp = new Node;
    temp->key = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

int sum(Node * root)
{
    if(root == NULL)
    {
        return 0;
    }
    
    return sum(root->left) + root->key + sum(root->right);
    
}


int main()
{
    // Tree made
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->right->left = newNode(4);
    root->right->right = newNode(3);
 
    cout<<"The number sum of keys are "<< sum(root)<<endl;
    return 0;
}
//This is a program to find the number of nodes in a binary tree

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

int number_of_nodes(Node * root)
{
    if(root == NULL)
    {
        return 0;
    }
    
    return number_of_nodes(root->left) + 1 + number_of_nodes(root->right);
    
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
 
    cout<<"The number of nodes are "<< number_of_nodes(root)<<endl;
    return 0;
}
//This is a program to find the maximum depth of a binary tree

#include<iostream>
#include<queue>

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


int maximum_element(Node * root)
{   if(root==NULL)
    {
        return 0;
    }
    return max(root->key,max(maximum_element(root->left),maximum_element(root->right)));
}


int main()
{
    // Tree made
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(8);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->right->left = newNode(4);
    root->right->right = newNode(3);
    //root->left->left->left = newNode(3);
    //root->left->left->left->right = newNode(3);
    //root->left->left->left->left = newNode(3);
    //root->left->left->left->right = newNode(3);
 

    cout<<"The maximum element is "<< maximum_element(root)<<endl;
    return 0;
}
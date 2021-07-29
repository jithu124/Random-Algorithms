//The program is to check if a tree is symmetric
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

bool isSymmetric(Node * root1, Node * root2)
{
    if(root1 == NULL && root2 == NULL)
    {
        return true;
    }

    if(root1 && root2 && (root1->key == root2->key))
    {   //It is checked if the left child of left root and the right child of right root are same and
        //right child of left root and left child of right root are the same.
        return isSymmetric(root1->left, root2->right) && isSymmetric( root1->right, root2->left); 
    }
    return false;
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
 
    if(isSymmetric(root,root))
      cout<<"Symmetric";
    else
      cout<<"Not symmetric";
    return 0;
}
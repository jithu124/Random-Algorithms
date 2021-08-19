//The program is to perform the the level order transversal in reverse order i.e from leaves to root

#include<iostream>
using namespace std;

typedef struct node {
    int data;
    node * left;
    node * right;

    node(int d):data(d),left(NULL),right(NULL){}
} node;

int height(node * root)
{
    if(root == NULL)
    {
        return 0;
    }

    int l = height(root->left);
    int r = height(root->right);

    if(l>r)
    {
        return (l+1);
    }
    else
    {
        return (r+1);
    }
}

void reverse(node * root, int level)
{
    if(root==NULL)
    {
        return;
    }
    if(level==1)
    {
        cout<<root->data <<" ";
    }
    else
    {
        reverse(root->left,level - 1);
        reverse(root->right,level - 1);
    }
}

void reverseLevelOrder(node * root)
{
    int h = height(root);
    for( int i = h;i >= 1 ;i--)
    {
        reverse(root,i);
    }

}

node* newNode(int data)
{
    node* Node = new node(data);
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
 
    return(Node);
}


int main()
{
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
 
    cout << "Level Order traversal of binary tree is \n";
    reverseLevelOrder(root);
 
    return 0;
 
}
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

int max_depth(Node * root)
{
    if(root == NULL)
    {
        return 0;
    }
    int l = max_depth(root->left);
    int r = max_depth(root->left);

    if(l>r)
    {
        return l+1;
    }
    else
    {
        return r+1;
    }
    
}

int depth_using_queue(Node * root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    int height = 0;
    Node * temp;

    while(q.empty()==false)
    {
        temp = q.front();
        q.pop();
        if(temp != NULL)
        {
            if(temp->left != NULL)
            {
                q.push(temp->left );
            }
            if(temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
        else
        {
            if(q.empty()==false)
            {
                height++;
                q.push(NULL);
            }
        }
    }

    return height;
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
    //root->left->left->left = newNode(3);
    //root->left->left->left->right = newNode(3);
    //root->left->left->left->left = newNode(3);
    //root->left->left->left->right = newNode(3);
 
    cout<<"The maximum depth is "<< max_depth(root)<<endl;
    cout<<"The maximum depth using queue is "<< depth_using_queue(root)<<endl;
    return 0;
}
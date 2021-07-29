#include<iostream>
#include <queue>

using namespace std;
struct node
{
    int data;
    struct node * left, * right;
};

typedef struct node Node;

Node * New_Node(int inp)
{
    Node * temp = new Node;
    temp->data = inp;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void Inorder(Node * root)
{
    if(root != NULL)
    {
        Inorder(root->left);
        cout<<root->data<<" ";
        Inorder(root->right);
    }
}


void level_order_insert(Node * root,int input)
{
     queue<Node *> Q;
     Q.push(root);

     while(Q.empty() ==false)
     {
         Node * temp = Q.front();
         //cout<<temp->data<<" ";
         Q.pop();

         if(temp->left != NULL)
         {
             Q.push(temp->left);
         }
         else
         {
             temp->left = New_Node(input);
             return;
         }

         if(temp->right != NULL)
         {
             Q.push(temp->right);
         }
         else
         {
             temp->right = New_Node(input);
             return;
         }
     }

}


int main()
{
    Node * root;
    root = New_Node(1);
    root->left = New_Node(2);
    root->right = New_Node(3);
    root->left->left = New_Node(4);
    root->left->right = New_Node(5);
    cout<<"Inorder : ";
    Inorder(root);
    cout<<"\n";
    level_order_insert(root,1);
    cout<<"\n Inorder : "; 
    Inorder(root);
    return 0;
}
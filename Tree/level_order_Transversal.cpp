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


void level_order_transversal(Node* root)
{
     queue<Node *> Q;
     Q.push(root);

     while(Q.empty() ==false)
     {
         Node * temp = Q.front();
         cout<<temp->data<<" ";
         Q.pop();

         if(temp->left != NULL)
         {
             Q.push(temp->left);
         }

         if(temp->right != NULL)
         {
             Q.push(temp->right);
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

    level_order_transversal(root);
     
    return 0;
}
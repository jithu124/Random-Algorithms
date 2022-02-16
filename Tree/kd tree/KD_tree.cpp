/* Program to store array of two elements in a kd tree where k = 2 */
#include<iostream>
const int k = 2;

struct node{
    int arr[k];
    node * left, * right;
};

typedef struct node Node;

Node * newnode(int arr_in[k])
{
    Node * temp = new Node;
    for(int i =0;i<k;i++)
    {
        temp->arr[i] = arr_in[i];
    }
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

Node * insert_rec(Node * root, int * ptr, int level)
{
    if(root == NULL)
    {
        return newnode(ptr);
    }
    
    int  dim = level%k;

    if(ptr[dim] < root->arr[dim])
    {
        root->left = insert_rec(root->left ,ptr,level+1);
    }
    else
    {
        root->right = insert_rec(root->right,ptr,level+1);
    }

    return root;


}

Node * insert(Node * root, int points[])
{   
        return insert_rec(root, points, 0);
}
void inorder(Node * root)
{
    if(root)
    {
        inorder(root->left);
        printf(" [%d,%d], ",root->arr[0],root->arr[1]);
        inorder(root->right);
    }
}


int main()
{
    int arr[][k] = {{5,10},{1,2},{8,55},{0,8},{0,0}};
    Node * root = NULL;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i <n ; i++)
    {
        root = insert(root,arr[i]);
    }
    inorder(root);
    return 0;
}
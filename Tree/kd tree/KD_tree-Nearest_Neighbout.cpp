/* Program to store array of two elements in a kd tree where k = 2 */
#include<iostream>
#include<cmath>
const int k = 2;

struct node{
    int arr[k];
    node * left, * right;
};

struct Result{
    node * best;
    float best_dist;
};

typedef struct Result res;

typedef struct node Node;
res Output;

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
float dist(Node * a, int point[])
{
    return (a->arr[0]-point[0])*(a->arr[0]-point[0]) + (a->arr[1]-point[1])*(a->arr[1]-point[1]);
}

void nearest(Node * root, int point[], res * output,int index)
{
    if(root == NULL)
    {
        return;
    }
    float dist_root_point = dist(root,point);

    if(dist_root_point < output->best_dist)
    {
      output->best = root;
      output->best_dist = dist_root_point;
    }

    if(dist_root_point < 0.001)
    {
        return;
    }

    index = (index+1)%k;
    float d = root->arr[index] - point[index];

    if(d<0)
    {
        nearest(root->left,point,output,index);
    }
    else
    {
        nearest(root->right,point,output,index);
    }

    if(d*d > dist_root_point )
    {
        return;
    }

    if(d<0)
    {
        nearest(root->right,point,output,index);
    }
    else
    {
        nearest(root->left,point,output,index);
    }





}

int main()
{
    int arr[][k] = {{5,10},{1,2},{8,55},{0,8},{0,0}};
    Node * root = NULL;
    int find[2] = {0,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i <n ; i++)
    {
        root = insert(root,arr[i]);
    }
    inorder(root);
    Output.best_dist = INT_MAX;
    nearest(root,find,&Output,0);
    printf("\nThe nearest point is [%d,%d]",Output.best->arr[0],Output.best->arr[1]);
    return 0;
}
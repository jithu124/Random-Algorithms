
/* construction of BST from preorder
 * traversal */
#include <bits/stdc++.h>
using namespace std;
 
/* A binary tree node has data, pointer to left child
and a pointer to right child */
class node {
public:
    int data;
    node* left;
    node* right;
};
 
// A utility function to create a node
node* newNode(int data)
{
    node* temp = new node();
 
    temp->data = data;
    temp->left = temp->right = NULL;
 
    return temp;
}
 
// A recursive function to construct Full from pre[].
// preIndex is used to keep track of index in pre[].
node* constructTreeUtil(int pre[], int* preIndex, int low,
                        int high, int size)
{
    if(*preIndex>size || low>high)
    {
        return NULL;
    }

    node * root = newNode(pre[*preIndex]);
    *preIndex = *preIndex+1;

    if(low == high)
    {
        return root;
    }


    //find the next element greateer than the root
    int i;
    for(i = low;i<high;i++)
    {
        if(pre[i]>root->data)
        {
            break;
        }
    }

    root->left = constructTreeUtil(pre, preIndex, *preIndex, i-1,size);
    root->right = constructTreeUtil(pre, preIndex, i, high,size);




}
 
// The main function to construct BST from given preorder
// traversal. This function mainly uses constructTreeUtil()
node* constructTree(int pre[], int size)
{
    int preIndex = 0;
    return constructTreeUtil(pre, &preIndex, 0, size - 1,
                             size);
}
 
// A utility function to print inorder traversal of a Binary
// Tree
void printInorder(node* node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}
 
// Driver code
int main()
{
    int pre[] = { 10, 5, 1, 7, 40, 50 };
    int size = sizeof(pre) / sizeof(pre[0]);
 
    node* root = constructTree(pre, size);
 
    cout << "Inorder traversal of the constructed tree: \n";
    printInorder(root);
 
    return 0;
}
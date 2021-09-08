//https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1
/*Given a Binary Tree, print Left view of it. Left view of a Binary Tree is set of nodes visible when 
tree is visited from Left side. The task is to complete the function leftView(), which accepts root of the tree as argument.

Left view of following tree is 1 2 4 8.

          1
       /     \
     2        3
   /     \    /    \
  4     5   6    7
   \
     8   
*/
#include <iostream>
using namespace std;
 
vector<int> leftView(Node *root)
{
   // Your
   vector<int> res;
   queue<Node*> Q;
   Q.push(root);
   if(root ==NULL)
   {
       return res;
   }
   while(Q.empty()==false)
   {    int n = Q.size();
       for(int i=0;i<n;i++)
       {
           Node * temp = NULL;
           temp = Q.front();
           Q.pop();
           if(i==0)
           {
               res.push_back(temp->data);
           }
           if(temp->left!=NULL)
           {
               Q.push(temp->left);
           }
           
           if(temp->right !=NULL)
           {
               Q.push(temp->right);
           }
       }
   }
   return res;
}

 
int main()
{
 
    return 0;
}

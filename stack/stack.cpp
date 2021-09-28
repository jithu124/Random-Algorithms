/*Basic stack program. Characters are stored in linked list and decimal equivalent is found using stack*/
#include <iostream>
#include <stack>
using namespace std;

struct Node{
    char c;
    struct Node * next;
};
typedef struct Node Node;

void append(Node ** q, char a)
{   
    Node * temp;
    temp = (Node*)malloc(sizeof(Node));
    temp->c = a;
    
    if(*q == NULL)
    {
        *q = temp;
    }
    else
    {
        Node * temp2 = *q;
        while(temp2->next != NULL)
        {
            temp2 = temp2->next;
        }
        temp2->next = temp;
    }
}

int main() {
	    stack<char > a;
	    Node * root = NULL;
	    append(&root,'1');
	    append(&root,'1');
	    append(&root,'1');
	    append(&root,'1');

	    int base = 1;
	    int sum = 0;
	    
	    Node * temp = root;
	    while(temp !=NULL)
	    {
	        a.push(temp->c);
	        temp = temp->next;
	    }
	    
	    while(a.empty()!= true)
	    {
	        char z = a.top();
	        a.pop();
	        sum += base*(z-48);
	        base *=2 ;
	    }
	    cout<<sum;
	return 0;
}

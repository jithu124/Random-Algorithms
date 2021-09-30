//Linked list class
#include<iostream>
using namespace std;
class Linked_list;

class node{
    int data;
    node * next;
    public:
        node(int n):data(n),next(NULL){cout<<"node created with data "<<n<<endl;}
        friend class Linked_list;
        
};

class Linked_list{

    node * head;
    public:
        Linked_list():head(NULL){}

        void add(int n)
        {
            node * temp = head;
            if(temp==NULL)
            {
                head = new node(n);
            }
            else
            {
                while(temp->next !=NULL)
                {
                    temp = temp->next;
                }
                temp->next = new node(n);
            }
        }

        void del(int n)
        {
            node * temp = head;
            node * prev = NULL;
            node * t = NULL;
            while(temp !=NULL)
            {
                if(temp->data==n)
                {
                    if(temp==head)
                    {
                        t = head;
                        head = head->next;
                        delete t;
                        return;
                    }
                    else
                    {
                        
                        prev->next = temp->next;
                        free(temp);
                        return;
                    }
                    

                }
                prev = temp;
                temp = temp->next;
            }
        }

        void addatbeginnin(int n)
        {
            node * temp = head;
            head = new node(n);
            head->next = temp;
        }

        void printit()
        {
            node * temp = head;
            while(temp)
            {
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<"\n";
        }
};

int main()
{
    Linked_list a;
    a.add(4);
    a.add(6);
    a.add(5);
    a.add(9);
    a.printit();
    a.del(5);
    a.printit();
    a.addatbeginnin(100);
    a.printit();
    a.del(100);
    a.printit();
    return 0;

}

#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

#define CH 0

class stack{
    int top;
    vector<char> arr;

    public:
        stack():top(-1){arr.resize(100);cout<<"stack initialized"<<endl;}
        ~stack(){cout<<"stack destructor"<<endl;}

        void push(char s)
        {
            arr[++top] = s;
        }

        char front()
        {   char res = '0';
            if(top>=0)
            {
                res=arr[top];
            }
            return res;
        }

        void pop()
        {
            if(top > -1)
            {
                top--;
            }
        }

        bool isempty()
        {
            return top == -1;
        }

        void printit()
        {   
            for(int i = top;i>=0;i--)
            {
                cout<<arr[i];
            }
            cout<<"\n";
        }

};

int main()
{
    stack s;
    char str[]="abcdefgh";
    int n = strlen(str);
#if CH
    for(int i =0;i<n;i++) 
    {
        s.push(str[i]);
    }
#else
    char * ptr = str;
    while(*ptr!='\0')
    {
        s.push(*ptr);
        ptr++;
    }
#endif
    s.printit();
    s.pop();
    cout<<s.front()<<endl;
    s.printit();

}
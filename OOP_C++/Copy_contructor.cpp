/*Call-by-value: Make a copy (clone) of the actual parameter
as a formal parameter. This needs a Copy Constructor

Return-by-value: Make a copy (clone) of the computed
value as a return value. This needs a Copy Constructor

Copy Constructor is needed for initializing the data
members of a User Defined Types from an existing value

Myclass (const Myclass &p)---signature

Compiler-provided copy constructor, understandably,
cannot initialize the object to proper values. It has no
code in its body. It performs a bit-copy*/

#include<iostream>
#include<vector>
#include<cstring>
using namespace std;



class String
{
    public:
        char * str;
        int len;
        String(const String &s):str(strdup(s.str)),len(s.len){cout<<"copy constructor"<<endl;}//copy constructor
        String(char * a):str(strdup(a)),len(strlen(a)){cout<<"constructed"<<endl;}//Default constructor
        ~String(){cout<<str<<" is Destructed"<<endl;}
        void print(){cout<<str<<endl;}

};
void toupper(String a)
{
    for(int i =0;i<a.len;i++)
    {
        a.str[i]= toupper(a.str[i]);
    }
    cout<<"Converted upper string is : "<< a.str<<endl;
}

int main()
{
    String a = "abcde";
    a.print();
    toupper(a);
    a.print();
    return 0;

}
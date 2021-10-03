#include<iostream>
using namespace std;

class B{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
        B(int i,int j,int k):a(i),b(j),c(k){cout<<"B initialized"<<endl;}
        ~B(){cout<<"B destroyed"<<endl;}

};

class A:protected B{
    public:
        A(int i,int j,int k):B(i,j,k){cout<<"A initialized"<<endl;}
        ~A(){cout<<"A destroyed"<<endl;}
        void print(){
            cout<<b<<c<<endl;
        }

};

int main()
{
    A a(1,2,3);
    a.print();
}
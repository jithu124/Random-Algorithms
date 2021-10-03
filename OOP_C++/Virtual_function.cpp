#include<iostream>
using namespace std;

class B{

    public:
        void f(){cout<<"B::f"<<endl;}
        virtual void g(){cout<<"B::g"<<endl;}
};

class D:public B{

    public:
        void f(){cout<<"D::f"<<endl;}
        void g(){cout<<"D::g"<<endl;}

};

int main(){

    B b;
    D d;

    B * pb = &b;
    B * pd = &d;

    pb->f();//B::f
    pb->g();//B::g

    pd->f();//B::f
    pd->g();//D::g

    return 0;
}
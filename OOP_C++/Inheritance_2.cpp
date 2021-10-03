#include<iostream>
using namespace std;


class B { // Base Class
    public:
    void f(){cout<<"B::f"<<endl;}
    void g(int i){cout<<"B::g"<<endl;}
};
class D: public B { // Derived Class
    public:
    using B::f;
    // Inherits B::f(int)
    void f(int){cout<<"D::f"<<endl;} // Overrides B::f(int)
    void f(const string&s){cout<<"D::f(string&)"<<endl;} // Overloads B::f(int)
    // Inherits B::g(int)
    void h(int i){cout<<"D::h"<<endl;} // Adds D::h(int)
};

int main(){
    B b;
    D d;
    b.f(); // Calls B::f(int)
    d.f();/* using B::f; is added in the derived class. It wont automatically add the base calss function as it is overloaded in the derived class.
            Thus, if there is a function overload, the base class function is masked in the derived class*/
    b.g(2); // Calls B::g(int)
    d.f(3); // Calls D::f(int)
    d.g(4); // Calls B::g(int)
    d.f("red"); // Calls D::f(string&)
    d.h(5); // Calls D::h(int)

return 0;
}
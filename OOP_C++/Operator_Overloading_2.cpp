#include<iostream>
using namespace std;

class Complex{
    double real, imag;
    public:
        Complex(double a=0,double b=0):real(a),imag(b){}
    void print(){cout<<real<<" + j"<<imag<<endl;}

    friend Complex operator+(const Complex &a, const Complex &b)
    {
        return Complex(a.real+b.real,a.imag+b.imag);
    }

    friend Complex operator+(const Complex &a, double b)
    {
        Complex temp(b);
        return a+temp;
    }

    friend Complex operator+(double b, const Complex &a)
    {
        Complex temp(b);
        return a+temp;
    }

};

int main(){

    Complex a(1,1);
    Complex b(2,2);
    Complex c;
    c = a+b;
    c.print();//3 +j3
    c = c+1;
    c.print();//4+j3
    c = 1+c+a;
    c.print();//6+j4
    return 0;
}
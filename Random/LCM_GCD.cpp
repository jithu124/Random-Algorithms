#include<iostream>
using namespace std;


class number{
    public:
        number(){}
        int n1,n2;;
        number(int i,int j):n1(i),n2(j){}

        int hcf()
            {   
                return hcf(n1,n2);
            }
            
        int hcf(int a,int b)
        {
            if(a==0)
            {
                return b;
            }
            else
            {
                return a*b != 0?hcf(b%a,a):INT64_MAX;
            }
        }

        int lcm()
        {
            return lcm(n1,n2);

        }

        int lcm(int a, int b)
        {
            return a*b != 0 ? a*b/hcf(a,b):0;
        }

};


int main(){


    number a;
    cout<<a.lcm(10,20)<<endl;
    cout<<a.hcf(10,20)<<endl;

    number b(10,20);
    cout<<b.lcm()<<endl;
    cout<<b.hcf()<<endl;

    return 0;
}
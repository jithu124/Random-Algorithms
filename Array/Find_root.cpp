#include<iostream>
#include<cmath>
using namespace std;

class number{

    int n;
    double tolerance;
    public:
        number(int i = 0,double tol=0.00001):n(i),tolerance(tol){cout<<"Number initialized : "<<n<<endl;}
        
        double diff(double mid, double b,int p)
        {
            return mypower(mid,p)-b;
        }
        double mypower(double a, int b)
        {
            if(b<0)
            {
                return 1/mypower(a,-b);
            }
            if(b == 1)
            {
                return a;
            }
            else if(b%2==0)
            {
                return mypower(a,b/2)*mypower(a,b/2);
            }
            else
            {
                return a*mypower(a,b-1);
            }

        }
        double root(int p)
        {   
            double low = 0, high = n;
            
            while(1){

                double mid = (low+high)/2;
                if(abs(diff(mid,n,p))<=tolerance)
                {
                    return mid;
                }
                else if(diff(mid,n,p)>0)
                {
                    high = mid;
                }
                else
                {
                    low = mid;
                }
            }
            

        }
};

int main(){

    number a(32);

    cout<<a.root(5)<<endl;//find the 5th root
    cout<<a.mypower(10,-2)<<endl;//find 10^-2

    return 0;
}
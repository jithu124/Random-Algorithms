#include<iostream>
#include<vector>
using namespace std;


class average{
    vector<int> elements;
    int num;//number of moving averages
    int sum;//sum of numbers for average
    int count;
    public:
    average(){cout<<"Initiatlized\n";sum=0;}
    average(int n):num(n){
        cout<<"Initiatlized with\n"<<n<<"\n";
            for(int i = 0;i<num;i++)
            {
                elements.push_back(0);
            }
            sum=0;
            count = 0;
    }
    void setavgnum(int n){ num = n;}

    double moving(int input)
    {
        sum = sum + input - elements[count];
        elements[count] = input;
        count ++;
        if(count>num-1)
        {
            count = 0;
        }
        return (double)sum/num;
    }
};

int main()
{
    average a(5);
    for(int i =1;i<11;i++)
    cout<<"average is "<<a.moving(i)<<"\n";
    return 0;
}
//https://practice.geeksforgeeks.org/problems/rightmost-different-bit-1587115621/1
#include<iostream>
#include<cmath>



class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        int n1 = (int)log2(m);
        int n2 = (int)log2(n);
        
        n1 = n1>n2 ? n1:n2;
        
        for(int i=0; i<=n1; i++)
        {
            if((int)((m>>i)&1)!=(int)((n>>i)&1))
            {
                //cout<<(int)((m>>i)&1)<<"---"<<(int)((n>>i)&1)<<endl;
                return (i+1);
            }
        }
        
        
        return -1;
        
    }
};

int main()
{

	return 0;
}

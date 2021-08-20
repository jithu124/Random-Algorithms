//https://practice.geeksforgeeks.org/problems/find-first-set-bit-1587115620/1
#include<iostream>
#include<cmath>



class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
       int n1 = (int)log2(n)+1;
        int res = 0;
        
     
        for(int i=0; i<n1; i++)
        {
            if((int)((n>>i)&1)==1)
            {
                res = (i+1);
                break;
            }
        }
        
        return res;
    }
};

int main()
{

	return 0;
}

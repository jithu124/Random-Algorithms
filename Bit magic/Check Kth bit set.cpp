//https://practice.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/1
#include<iostream>
#include<cmath>



class Solution
{
    public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    { 
        
  
       if((n &(1<<k)))
            {return true;}
        else
            {return false;}
    }
};

int main()
{

	return 0;
}

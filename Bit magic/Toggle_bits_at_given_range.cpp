//https://practice.geeksforgeeks.org/problems/toggle-bits-given-range0952/1
#include<iostream>
#include<cmath>



class Solution {
  public:
    int toggleBits(int N , int L , int R) {
        // code here
        
        for(int i = L-1; i<R; i++)
        {
            N = N^(1<<i);
        }
        return N;
    }
};
/*
class Solution {
  public:
    int toggleBits(int N , int L , int R) {
        // code here
        
        for(int i = L-1; i<R; i++)
        {
            int bit = (1<<i)&N;
            
            if(bit == 0)
            {
                N |= 1<<i;
            }
            else
            {
                N &= ~(1<<i);
            }
        }
        return N;
    }
};
*/

int main()
{

	return 0;
}

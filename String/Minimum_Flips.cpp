/*Program to find the minimum number of flips such that all the 1 s in the string 
are in the left side and all the 0s are towards the right side 
*/
#include <bits/stdc++.h>
using namespace std;

int minimalFilps(string bits)
{   
    int minFlips = INT_MAX;

    int n = bits.length();
	int fromleft[n]  = {0};
	int fromright[n] = {0};
	
	int flips = 0;
	for(int i =0;i<n;i++)
	{
	    if(bits[i]=='0')
	    {   flips++;
	        
	    }
	    fromleft[i] = flips;
	}
	
	flips = 0;
	for(int i = n-1;i>=0;i--)
	{
	    if(bits[i]=='1')
	    {   flips++;
	        
	    }
	    fromright[i] = flips;
	}
	/*
    this check is done to see if the flips of 0s till (i-1) position 
    and the number of 1s to be flipped till the ith position has minimum sum.*/
	for(int i = 1; i < n; i++)
	{
	    if(fromleft[i-1]+fromright[i]< minFlips)
	    {
	        minFlips = fromleft[i-1]+fromright[i];
	    }
	}
	

	return minFlips;
}


int main()
{
	string bits = "1011100";
	cout << minimalFilps(bits) << endl;
	return 0;
}


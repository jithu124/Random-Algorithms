//Pythagorean Triplet
//Given an array arr of N integers, write a function that returns true if there is a triplet (a, b, c)
//that satisfies a2 + b2 = c2, otherwise false.
#include<iostream>
#include<vector>
using namespace std;

#define MAX_2(a,b) (a>b ? a : b)

class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    
	    if(n<3)
	    {
	        return false;
	    }
	    int max = -2000;
	    for(int i =0;i<n;i++)
	    {
	        max = MAX_2(max,arr[i]);
	    }
	    
	    int temp[2*max*max]={0};
	    
	    for(int i =0;i<n;i++)
	    {
	        temp[arr[i]*arr[i]] =1;
	    }
	    
	    
	    for(int i =0;i<n-1;i++)
	    {
	        for(int j = i+1; j<n; j++)
	        {
	            if(temp[arr[i]*arr[i] + arr[j]*arr[j]]==1)
	            {
	                return true;
	            }
	        }
	    }
	    
	    
	    return false;
	    
	}
};

int main(){




return 0;
}

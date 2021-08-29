//Count the triplets 
//Given an array of distinct integers. The task is to count all the triplets such that sum of two elements equals the third element.
//https://practice.geeksforgeeks.org/problems/count-the-triplets4615/1
#include<iostream>
#include<vector>
using namespace std;


#define MAX(a,b) (a>b?a:b)
class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	    int max = 0;
	    for(int i =0;i<n;i++)
	    {
	        max = MAX(max,arr[i]);
	    }
	    
	    const int size = 2*max;
	    
	    int temp[size]={0};
	    
	    for(int i = 0;i<n;i++)
	    {
	        temp[arr[i]]=1;
	    }
	    
	    int count = 0;
	    for(int i = 0;i<n;i++)
	    {
	        for(int j = i+1;j<n;j++)
	        {
	            if(temp[arr[i]+arr[j]]==1)
	            {
	                count++;
	            }
	        }
	        
	    }
	    
	    return count;
	}
};

int main(){




return 0;
}

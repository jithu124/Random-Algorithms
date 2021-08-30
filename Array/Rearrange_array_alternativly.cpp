//Rearrange Array Alternately
//Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively 
//i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on.
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	long long limit = arr[n]+1;
    	int max = n-1;
    	int min = 0;
    	for(int i = 0; i < n; i++)
    	{
    	    if(i%2==0)
    	    {
    	        arr[i] += (arr[max]%limit)*limit;
    	        max--;
    	    }
    	    else
    	    {
    	        arr[i] += (arr[min]%limit)*limit;
    	        min++;
    	    }
    	    
    	}
    	
    	for(int i = 0; i < n; i++)
    	{
    	        arr[i] /= limit;
    	}
    	 
    }
};

int main(){




return 0;
}

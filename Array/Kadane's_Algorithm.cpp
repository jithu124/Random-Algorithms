//Kadane's Algorithm 
//Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) 
//which has the maximum sum and return its sum.
//https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
#include<iostream>
#include <climits>


class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int sum = 0;
        int min = 0;
        int m = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            sum +=arr[i];
            if((arr[i]<=0) && (arr[i]>m))
            {
                m = arr[i];
            }
            if(sum<0)
            {
                sum=0;
            }
            if(sum>min)
            {
                min = sum;
            }
            
        }
        
        return min==0 ? m : min;
        
    }
};

int main(){




return 0;
}

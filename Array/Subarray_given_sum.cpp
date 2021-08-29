//Subarray with a given sum
//https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1
#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
       int start =0,i=0,sum=0;
       vector <int> ans;
       while(i<n)
       {
           sum +=arr[i];
           
           while(sum>s)
           {
               sum -=arr[start++];
           }
           
           if(sum==s)
           {
             
               return ans = {start+1,i+1};
           }
           i++;
       }
       
       return ans = {-1};
    }
};

int main(){




return 0;
}

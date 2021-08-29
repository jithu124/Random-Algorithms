//Trapping Rain Water 
//https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1
#include<iostream>


#define min(a,b) (a<b?a:b)
#define max(a,b) (a>b?a:b)
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        
        int left[n];
        int right[n];
        int max1 = arr[0];
        left[0] = arr[0];
        right[n-1] = arr[n-1];
        for(int i =1;i<n;i++)
        {
            max1 = max(max1,arr[i]);
            left[i] = max1;
        }
        
        max1 = arr[n-1];
        
        for(int i =n-2;i>=0;i--)
        {
            max1= max(max1,arr[i]);
            right[i] = max1;
        }
        
        int rain = 0;
        
        for(int i =0;i<n;i++)
        {
            rain += -arr[i]+min(left[i],right[i]);
        }
        
        // Code here
        
        return rain;
    }
};

int main(){




return 0;
}

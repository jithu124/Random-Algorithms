//Leaders in an array 
//Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is leader if
// t is greater than or equal to all the elements to its right side. The rightmost element is always a leader. 
#include<iostream>
#include<vector>
#include<algorithm>//for the reverse fuction
using namespace std;

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        int max = a[n-1];
        vector<int> res;
        res.push_back(max);
        if(n==1)
        {
            return res;
        }
        for(int i = n-2;i>=0;i--)
        {
            if(a[i]>=max)
            {
                res.push_back(a[i]);
                max = a[i];
            }
            
        }
        
        reverse(res.begin(),res.end());
        return res;
        
    }
};

int main(){




return 0;
}

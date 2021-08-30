//Sort an array of 0s, 1s and 2s
//Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.
#include<iostream>
#include<vector>
using namespace std;

#define MIN1(a,b) a<b?a:b
class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        int i;
        for (i = 0;i<n;i +=k)
        {
            int left =i;
            int right = MIN1(left +k-1,n-1);
            while(left<right)
            {
                int temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;
                left++;right--;
                
            }
        }
        
        
        // code here
    }
};

int main(){




return 0;
}

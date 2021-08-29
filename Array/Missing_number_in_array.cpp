//Missing number in array 
//Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.
//https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1
#include<iostream>
#include<vector>
#include<numeric>//for using accumulate from STL
using namespace std;


class Solution1{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        
        int x1 =1;
        for(int i =2;i<=n;i++)
        {
            x1^=i;
        }
        int x2 = array[0];
        
        for(int i =1;i<array.size();i++)
        {
            x2^=array[i];
        }
        
        return x1^x2;
    }
};

class Solution2{
  public:
    int MissingNumber(vector<int>& array, int n) {
        
        return (n*(n+1)/2)- accumulate(array.begin(),array.end(),0);
        // Your code goes here
    }
};

int main(){




return 0;
}

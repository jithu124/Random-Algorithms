//Element with left side smaller and right side greater 
//Given an unsorted array of size N. Find the first element in array such that all of its left elements are smaller 
//and all right elements to it are greater than it.
//Note: Left and right side elements can be equal to required element. And extreme elements cannot be required element.

#include<iostream>
#include<vector>
using namespace std;

int findElement(int arr[], int n) {
    
    int maxarr[n];
    int minarr[n];
    int max = arr[0];
    int min = arr[n-1];
    
    maxarr[0] = arr[0];
    
    for(int i =1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        maxarr[i] = max;
    }
    
    minarr[n-1] = arr[n-1];
    
    for(int i =n-2;i>=0;i--)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
        minarr[i] = min;
    }
    
    
    for(int i =1;i<n-1;i++)
    {
        if((arr[i]>=maxarr[i]) &&(arr[i]<=minarr[i]))
        {
            return arr[i];
        }
    }
    
    return -1;
    
    
    
}

int main(){




return 0;
}

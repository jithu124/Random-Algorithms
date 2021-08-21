//https://practice.geeksforgeeks.org/problems/who-will-win-1587115621/1
#include<iostream>


int searchInSorted(int arr[], int N, int K) 
{ 
    
       // Your code here
       int mid = N/2;
       if(arr[mid]==K)
       {
           return 1;
       }
       else if(((mid == 0)||(mid == N-1))&&(arr[mid] != K))
       {
           return -1;
       }
       else if(K>arr[mid])
       {
           return searchInSorted(arr+mid, N-mid, K);
       }
       else
       {
           return searchInSorted(arr,mid, K);
       }
       
}

int main(){




return 0;
}

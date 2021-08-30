//Sort an array of 0s, 1s and 2s
//Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
#include<iostream>
#include<vector>
using namespace std;

void swap(int *a, int *b)
{
    int temp ;
    temp = *a;
    *a = *b;
    *b = temp;
}
void sort012(int a[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n-1;
    
    while(mid<=high)
    {
        switch(a[mid])
        {
            case 0:
            swap(&a[low++],&a[mid++]);
            break;
            
            case 1:
            mid++;
            break;
            
            case 2:
            swap(&a[mid],&a[high--]);
            break;
            
        }
    }
    
    
}

int main(){




return 0;
}

/*The program is to find a subarray of an array with a given sum in O(n) time. 
The start and end indices are printed*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int a[]={4,5,9,6,3,8,7,6,-1,2};
	int n = sizeof(a)/sizeof(a[0]);
	int start = 0,i,current = a[start];;
	int sum=23;
	for(i=1;i<n;i++)
	{
	    while(current > sum && start < i-1)
	    {
	        current -= a[start++];
	        
	    }
	    if(current == sum)
	    {
	        printf("The array is between %d and %d",start,i-1);
	        break;
	    }
	    current += a[i];
	    
	}
	
	return 0;
}



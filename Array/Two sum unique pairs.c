/*Find the unique two sum pairs in O(nlogn) time
The given array is first sorted and then the two sum elements are 
found using a while loop*/
#include <stdio.h>
#include <stdlib.h>


void print(int *ptr,int n);
int compare(const void * a, const void *b)
{
    return *(int *)a > *(int *)b;
}

int twosum(int *ptr,int n, int k);

int main() {
	
	int a[]={4,5,9,6,3,8,7,6,-1,2};
	int N = sizeof(a)/sizeof(a[0]);
	int k = 9;
	print(a,N);
	qsort((void*)a,N,sizeof(a[0]),compare);
	print(a,N);
	fflush(stdout);
	printf("Number of twosum pairs are %d",twosum(a,N,k));
	return 0;
}

int twosum(int *p,int n, int k)
{   int * ptr = p;
   int i =0,j=n-1;
   int count = 0;
   while(i<j)
   {
        if(*(ptr+i) + *(ptr+j) == k)
        {
		printf("The pairs are %d and %d\n",*(ptr+i),*(ptr+j));
		while((i<j) && (*(ptr+i) == *(ptr+i+1)))
		{ i++ ;}
		
		while((i<j) && (*(ptr+j) == *(ptr+j-1)))
		{ j-- ;}

		count++;
		i++;
		j--;
        }
        else if(*(ptr+i) + *(ptr+j) > k)
        {
            j--;
        }
        else
        {
            i++;
        }
        
   }
   printf("Count is %d\n",count);
   return count;
}

void print(int *ptr,int n)
{   
    int i =0;
    while(n>0)
    {
        printf("%d ",*(ptr+i));
        i++;n--;
    }
    printf("\n");
}

/*Rotate an array k times in O(n) time*/

#include <stdio.h>

void rotate(int *ptr,int n,int k);
void print(int *ptr,int n);

int main() {
	
	int a[]={1,2,3,4,5,6,7,8,9};
	int N = sizeof(a)/sizeof(a[0]);
	print(a,N);
	rotate(a,N,2);
	print(a,N);
	return 0;
}

void rotate(int *ptr,int n,int k)
{
    k = k%n;
    int num = n;
    int current = *ptr,index=0,temp2;
    while(num>0)
    {   
        index = (index+k)%n;
        temp2 = *(ptr+index);
        *(ptr+index) = current;
        current = temp2;
        num--;
        if(index==0)
        {
            index = 1;
            current = *(ptr+index);
        }
        
    }
    
}

void print(int *ptr,int n)
{   
    int i =0;
    while(n>0)
    {
        printf("%d",*(ptr+i));
        i++;n--;
    }
    printf("\n");
}

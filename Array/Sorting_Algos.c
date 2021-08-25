#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef void (*sortptr)(int *, int, int);
void swap(int *a, int *b);
void Bubble(int * ptr, int n1,int n);
void Selection(int * ptr, int n1,int n);
void Mergesort(int * ptr, int l, int r);
void Merge(int * ptr, int l, int m, int r);
void quicksort(int * ptr, int low, int high);
int partition(int * ptr, int low, int high);
void printit(int *ptr, int n);

int main(){

    int arr[] = { 1,2,-9,6,9,1,2,3,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    printit(arr,n);
    //Bubble(arr,n);
    //Selection(arr,n);
    //Mergesort(arr,0,n-1);
    quicksort(arr,0,n-1);
    printit(arr,n);
    int * ptr_temp = (int *)malloc(sizeof(arr));
    sortptr FunctionArray[] = {&Bubble,&Selection,&Mergesort,&quicksort};
    for(int i =0;i<4;i++)
    {
        //memcpy(ptr_temp,arr,sizeof(arr));
        for(i=0;i<9;i++)
        {*(ptr_temp+i)=arr[i];}
        printit(ptr_temp,n);
        FunctionArray[i](ptr_temp,0,8);
        printit(ptr_temp,n);

    }
    return 0;

}

void Bubble(int * ptr, int n1,int n)
{
    int i,j;
    for(i = n; i > 0 ;i--)
    {
        for(j=0;j<i;j++)
        {
            if(*(ptr+j+1)< *(ptr+j))
            {
                swap(ptr+j+1,ptr+j);
            }
        }
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printit(int *ptr, int n)
{
    for(int i =0; i<n; i++)
    {
        printf("%d ",*(ptr+i));
    }
    printf("\n");
}

void Selection(int * ptr, int n1,int n)
{
    int i,j;
    for(i = 0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(ptr+i) > *(ptr+j))
            {
                swap(ptr+i,ptr+j);
            }
        }
    }
}

void Mergesort(int * ptr, int l, int r)
{
    if(l<r)
    {  int m = l+((r-l)/2);
        Mergesort(ptr,l,m);
        Mergesort(ptr,m+1,r);
        Merge(ptr,l,m,r);
    }
}

void Merge(int * ptr, int l, int m, int r)
{
    const int n1 = m-l+1;
    const int n2 = r-m;
    int arr1[n1],arr2[n2];
    int i,j,k;
    for(i=0;i<n1;i++)
    {
        arr1[i] = *(ptr+i+l);
    }
    for(i=0;i<n2;i++)
    {
        arr2[i] = *(ptr+i+m+1);
    }

    for(i=0,j=0,k = l;(i<n1) && (j<n2);k++)
    {
        if(arr1[i]<arr2[j])
        {
            *(ptr+k)=arr1[i];
            i++;
        }
        else
        {
            *(ptr+k)=arr2[j];
             j++;

        }
    }

    while(i<n1)
    {
        *(ptr+k) = arr1[i];
        i++;k++;
    }

    while(j<n2)
    {
        *(ptr+k)=arr2[j];
        j++;k++;
    }

}


void quicksort(int * ptr, int low, int high)
{
    if(low<high)
    {
        int pivot = partition(ptr, low, high);
        quicksort(ptr,low,pivot-1);
        quicksort(ptr,pivot+1,high);
    }
}
int partition(int * ptr, int low, int high)
{
    int piv = *(ptr + high);
    int i = low-1,j;
    for(j=low;j<high;j++)
    {
        if(*(ptr+j)< piv)
        {
            i++;
            swap(ptr+i,ptr+j);
        }
    }
    swap(ptr+i+1,ptr+high);
    return i+1;
}
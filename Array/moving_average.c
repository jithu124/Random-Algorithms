#include<stdio.h>
#include<stdlib.h>

float moving(int * ptr,int inp, int num)
{
    static int count = 0;
    static int sum = 0;
    sum += inp - *(ptr+count);
    printf("sum= %d ",sum);
    
    *(ptr+count) = inp;
    
    count++;
    if(count>4)
    {
        count = 0;
        
    }
    float avg;

    avg = sum/num;

    return avg;
    

    
}


int main(int argc, char * argv[])
{   int n = 5;
    if(argc>1)
    {
         n = atoi(argv[1]);
    }
    
    int * temp = (int *)calloc(n,sizeof(int)*n);

    for(int i =1;i<21;i++)
    {
        printf("Average is %f\n",moving(temp,i,n));
    }
    return 0;

}
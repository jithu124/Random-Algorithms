#include<stdio.h>

struct node{
    int data1;
    int data2;
};


int main(){
    struct node a;
    struct node * ptr1 = &a;
    FILE * f = fopen("debug_file.csv","w"); 
    fprintf(f,"data1,data2\n");
    for(int i = 0;i<100;i++)
    {
        ptr1->data1 = i;
        ptr1->data2 = i*i;
        fprintf(f,"%d,%d\n",ptr1->data1,ptr1->data2);
        

    }
    fclose(f); 

    return 0;
}


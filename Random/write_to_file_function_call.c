#include<stdio.h>

struct node{
    int data1;
    int data2;
};
void write_to_file(struct node *ptr, char const *fileName,int firstrow); 

int main(){
    struct node a;
    struct node * ptr1 = &a;
    write_to_file(ptr1, "debug_file.csv",1);
    for(int i = 0;i<100;i++)
    {
        ptr1->data1 = i;
        ptr1->data2 = i*i;
        write_to_file(ptr1, "debug_file.csv",0);

    }

    return 0;
}

void write_to_file(struct node *ptr, char const *fileName,int firstrow) 
{ 
    FILE * f = fopen(fileName,"a"); // a == open and append from the last
    if(f == NULL)
    {
        return ;
        printf("Eror");
    }

    if(firstrow)
    {
        fprintf(f,"data1,data2\n");
        printf("22222\n");
    }
    else
    {
        printf("%d---",fprintf(f,"%d,%d\n",ptr->data1,ptr->data2));
        printf("%d,%d\n",ptr->data1,ptr->data2);
    }

    fclose(f); 
     
}

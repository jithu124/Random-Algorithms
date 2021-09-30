#include<iostream>
using namespace std;

 void swap(int *a, int *b)
        {
            int temp = *a;
            *a = *b;
            *b = temp;
        }

class Heap{

    int *arr;
    int size;
    int max;

    public:
        Heap(int n):arr(new int[n]),max(n),size(-1){cout<<"Heap initialized for "<<n<<" elements max"<<endl;}
       
        int parent(int i)
        {
            return (i-1)/2;
        }
        int left(int i)
        {
            return 2*i+1;
        }
        int right(int i)
        {
            return 2*i+2;
        }
        void add(int n)
        {
            if(size<max)
            {
                arr[++size] = n;
                int i = size;
                while(i!=0 &&(arr[parent(i)]>arr[i]))
                {
                    swap(&arr[i],&arr[parent(i)]);
                    i = parent(i);
                }

            }
            else
            {
                return;
            }
            
        }

        int extractmin()
        {
            if(size>=0)
            {
            int res = arr[0];
            arr[0] = arr[size];
            size--;
            heapify(0);
            return res;
            }
            else
            {
                return 0;
            }
        }

        void heapify(int i)
        {
            
            int min = i;
            int l = left(i);
            int r = right(i);
            if((l<=size) && (arr[min]>arr[l]))
            {
                min = l;
            }
            if((r<=size) && (arr[min]>arr[r]))
            {
                min = r;
            }
           
            if(min!=i)
            {
                swap(&arr[min],&arr[i]);
                heapify(min);              
            }


        }

        void printit()
        {
            for(int i = 0;i<=size;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
        }



};



int main(){

    Heap a(10);

    a.add(10);
    a.add(5);
    a.add(1);
    a.add(85);
    a.add(2);
    a.printit();
    cout<<"min is "<<a.extractmin()<<endl;
    a.printit();
    a.add(-5);
    a.add(22);
    a.printit();
    return 0;
}
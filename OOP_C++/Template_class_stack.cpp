#include<iostream>
using namespace std;
#define size 100


template<class T,class T2=int>
class Stack{
    private:
        T2 top;
        T arr[size];
    public:
        Stack();
        void pop();
        void push(T i);
        T front();
        bool isempty();
        bool notfull();
        void print();
};

template<class T,class T2>
Stack<T,T2>::Stack(){top = -1;}

template<class T,class T2>
void Stack<T,T2>::pop(){
    if(top > -1)
    { 
        top--;
    }
}

template<class T,class T2> 
void Stack<T,T2>::push(T i){
    if(notfull())
    {
        arr[++top] = i;
    }
}

template<class T,class T2> 
bool Stack<T,T2>::isempty(){
    return top == -1;
}

template<class T,class T2> 
bool Stack<T,T2>::notfull(){
    return top <= size;
}

template<class T,class T2> 
T Stack<T,T2>::front(){
        T res = arr[0];
        if(!isempty())
        {
            res = arr[top];
        }
        return res;
}
template<class T,class T2> 
void Stack<T,T2>::print(){
        for(int i = top; i>=0; i--)
        {
            cout<<arr[i];
        }
        cout<<endl;
}

int main(){
    Stack<char,int> a;
    a.push('a');
    a.push('b');
    a.push('c');
    a.push('d');
    a.push('e');
    a.print();
    cout<<"Front element is:"<<a.front()<<endl;

    Stack<int> num;
    num.push(1);
    num.push(2);
    num.push(3);
    num.push(4);
    num.push(5);
    num.print();
    cout<<"Front element is:"<<num.front()<<endl;


    return 0;
}
#include<iostream>
using namespace std;
#define size 100


template<class T>
class Stack{
    private:
        int top;
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

template<class T> Stack<T>::Stack(){top = -1;}

template<class T> void Stack<T>::pop(){
    if(top > -1)
    { 
        top--;
    }
}

template<class T> void Stack<T>::push(T i){
    if(notfull())
    {
        arr[++top] = i;
    }
}

template<class T> bool Stack<T>::isempty(){
    return top == -1;
}

template<class T> bool Stack<T>::notfull(){
    return top <= size;
}

template<class T> T Stack<T>::front(){
        T res = arr[0];
        if(!isempty())
        {
            res = arr[top];
        }
        return res;
}
template<class T> void Stack<T>::print(){
        for(int i = top; i>=0; i--)
        {
            cout<<arr[i];
        }
        cout<<endl;
}

int main(){
    Stack<char> a;
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
#include<iostream>
#include<cstring>
using namespace std;

template <class T>
T Max(T a, T b)
{
    return a > b ? a : b;
}

template<class T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template<>
char *Max<char *>(char *a,char *b){return strcmp(a,b)>0?a:b;}

int main(){

    double a = 3.5968,b = 2.2;
    char * s1 = strdup("AAA");
    char * s2 = strdup("aaa");
    int c = 5;
    cout<<Max(a,b)<<endl;
    cout<<Max(s1,s2)<<endl;
    int i = 10,j=20;
    swap(i,j);

    cout<<i<<" "<<j<<endl;
    swap(s1,s2);
    cout<<s1<<" "<<s2<<endl;

    return 0;
}
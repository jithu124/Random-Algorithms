#include <iostream>
using namespace std;
class MyClass { int data;
    public:
    MyClass(int d): data(d) { }

    /*The pre-operator should first perform the op-
    eration (increment / decrement / other) and
    then return the object. Hence its return type
    should be MyClass& and it should return *this;*/

    /*This is retunr by reference as ++(++(++someNum)) needs to be incremented three times*/
    MyClass& operator++() { // Pre-increment:
        ++data; // Operate and return the operated object
        return *this;
    }


    /*The post-operator should perform the operation (increment / decrement / other) after it
    returns the original value. Hence it should copy
    the original object in a temporary MyClass t; and
    then return t;. Its return type should be MyClass*/

    MyClass operator++(int) { // Post-Increment:
        MyClass t(data); // Return the (copy of) object; operate the object
        ++data;
        return t;
    }

    void disp() { cout << "Data = " << data << endl; }
};
int main() {

    MyClass obj1(8);
    ++(++obj1);
    obj1.disp();
    MyClass obj2 = obj1++;
    obj2.disp(); obj1.disp();
    obj2 = ++obj1;
    obj2.disp(); obj1.disp();

    return 0;
}
/*While a constant data member is not changeable even in a non-constant
object, a mutable data member is changeable in a constant object

mutable is provided to model Logical (Semantic) const-ness against the
default Bit-wise (Syntactic) const-ness of C++

1. mutable is applicable only to data members and not to variables
2. Reference data members cannot be declared mutable
3. Static data members cannot be declared mutable
4. const data members cannot be declared mutable

If a data member is declared mutable, then it is legal to assign a value to it
from a const member function*/

#include <iostream>
using namespace std;
class MathObject { // Constant concept of PI
    mutable bool piCached_; // Needed for computation
    mutable double pi_; // Needed for computation
    public:
    MathObject() : piCached_(false) { } // Not available at construction
    double pi() const
    {
        if(!piCached_)
        {
            piCached_ = !piCached_;
            pi_ = 3.14f;//calculate pi with some algorithms
        }
        return pi_;
    }
};
int main() {
MathObject mo;
cout << mo.pi() << endl; // Access PI
return 0;
}
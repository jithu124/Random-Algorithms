#include <iostream>
#include <cstring>
using namespace std;
class String { char *str_; size_t len_;
    public:
        String(const char *s) : str_(strdup(s)), len_(strlen(str_)) // ctor
        { 
            cout << "String ctor: "; print(); cout << endl; 
        }
        String(const String& s) : str_(strdup(s.str_)), len_(strlen(str_)) // cctor
        { cout << "String cctor: "; print(); cout << endl; }
        
        String & operator=(const String &s)
        {
            if(this!=&s)
            {
                free(str_);
                str_ = strdup(s.str_);
                len_ = s.len_;
            }
            return *this;
        }
~String() { cout << "String dtor: "; print(); cout << endl; free(str_); } // dtor
void print() const { cout << str_; }
};

int main()
{
    String a("name");
    String b(a);
    String c("Hello");
    c.print();
    c=a=b;
    c.print();

    return 0;
}


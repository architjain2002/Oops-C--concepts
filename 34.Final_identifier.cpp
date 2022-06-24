// When used in a virtual function declaration or definition,
// final specifier ensures that the function is virtual and specifies that it may not be overridden by derived classes.
// The program is ill-formed (a compile-time error is generated) otherwise.

// final is an identifier with a special meaning when used in a member function declaration or class head.
// In other contexts, it is not reserved and may be used to name objects and functions.
#include <iostream>
using namespace std;

class Base
{
public:
    virtual void myfun() final
    {
        cout << "myfun() in Base";
    }
};
class Derived : public Base
{
    void myfun() // Sometimes you don’t want to allow derived class to override the base class’ virtual function
    {
        cout << "myfun() in Derived\n";
    }
};

// final specifier in C++ 11 can also be used to prevent inheritance of class / struct

class Base2 final // here the class is declared final
{
};

class Derived2 : Base2 // we cannot inherit the base 2 class
{
};

int main()
{
    Derived d1;
    Base &b = d1;
    b.myfun(); // error

    Derived2 d2; // error
    return 0;
}

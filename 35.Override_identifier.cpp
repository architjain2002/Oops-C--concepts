// A CPP program that uses override keyword so
// that any difference in function signature is
// caught during compilation

// The programmer’s intentions can be made clear to the compiler by override.
// If the override identifier is used with a member function, the compiler makes sure that the member function exists in the base class,
//  and also the compiler restricts the program to compile otherwise.
#include <iostream>
using namespace std;

class Base
{
public:
    // user wants to override this in
    // the derived class
    virtual void func() { cout << "I am in base" << endl; }
};

class derived : public Base
{
public:
    // did a silly mistake by putting
    // an argument "int a"
    void func(int a) override // if we do not put this override identifier the compiler will compile and dodge the error
    {
        cout << "I am in derived" << endl;
    }
};

int main()
{
    Base b;
    derived d;
    cout << "Compiled successfully" << endl;
    return 0;
}

// Friend Function Like friend class,
// a friend function can be given a special grant to access private and protected members.
// A friend function can be:
// a) A member of another class
// b) A global function

#include <iostream>
using namespace std;

class A
{
    int x;

public:
    A()
    {
        x = 10;
    }
    friend class B; // friend class
};

class B
{
public:
    void display(A &t)
    {
        cout << endl
             << "The value of x=" << t.x;
    }
};

main()
{
    A _a;
    B _b;
    _b.display(_a);
    return 0;
}
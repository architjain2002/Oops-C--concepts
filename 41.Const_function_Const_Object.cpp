// C++ program to demonstrate the
// constant function

// When a function is declared as const, it can be called on any type of object,
// const object as well as non-const objects.

// Whenever an object is declared as const, it needs to be initialized at the time of declaration.
// However, the object initialization while declaring is possible only with the help of constructors.
#include <iostream>
using namespace std;

// Class Test
class Test
{
    int value;

public:
    // Constructor
    Test(int v = 0)
    {
        value = v;
    }

    // We get compiler error if we
    // add a line like "value = 100;"
    // in this function.
    int getValue() const
    {
        return value;
    }

    // a nonconst function trying to modify value
    void setValue(int val)
    {
        value = val;
    }
};

// Driver Code
int main()
{
    // Object of the class T
    Test t(20);

    // non-const object invoking const function, no error
    cout << t.getValue() << endl;

    // const object
    const Test t_const(10); // the constructor is called for initialization hence no error although const object

    // const object invoking const function, no error
    cout << t_const.getValue() << endl;

    // const object invoking non-const function, CTE
    // t_const.setValue(15);

    // non-const object invoking non-const function, no error
    t.setValue(12);

    cout << t.getValue() << endl;

    return 0;
}

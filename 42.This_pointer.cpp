// In C++ programming, this is a keyword that refers to the current instance of the class.
// There can be 3 main usage of this keyword in C++.

// 1.It can be used to pass current object as a parameter to another method.
// 2.It can be used to refer current class instance variable.
// 3.It can be used to declare indexers.

#include <iostream>
using namespace std;

class Test
{
private:
    int x;
    int y;

public:
    Test(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    Test &setX1(int a)
    {
        x = a;
        return *this;
    }
    Test setX2(int a)
    {
        x = a;
        return *this;
    }
    Test &setY(int b)
    {
        y = b;
        return *this;
    }
    void print() { cout << "x = " << x << " y = " << y << endl; }
};

int main()
{
    Test obj1(5, 5);
    Test obj2(5, 5);

    // Chained function calls. All calls modify the same object
    // as the same object is returned by reference
    obj1.setX1(10).setY(20); // here setx1 is has an & with it so the reference of the original obj1 is called hence x =10  and y=10
    obj1.print();

    obj2.setX2(10).setY(20); // here setx2 does not have an & with it so the copy of the original obj2(copy constructor is
                             // called and the value of the temp copy object has its value as x =10 and y =20 but obj2 remains unchanged) is called hence x =10  and y=5
    obj2.print();
    return 0;
}

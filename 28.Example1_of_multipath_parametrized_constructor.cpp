// One thing to note about virtual inheritance is that even if the parameterized constructor of the Person class is explicitly called
//     by Father and Mother class constructors through initialization lists,
//     only the base constructor of the Person class will be called.
// This is because there's only a single instance of a virtual base class that's shared by multiple classes that inherit from it.
// To prevent the base constructor from running multiple times, the constructor for a virtual base class is not called by the class inheriting from it.
// Instead, the constructor is called by the constructor of the concrete class.

// important example

#include <iostream>
using namespace std;

class A
{
    int x;

public:
    A(int i)
    {
        x = i;
        cout << x << endl;
    }
    void print() { cout << x; }
};

class B : virtual public A
{
public:
    B() : A(10){}; // the left an right classses are constructors of the base class are ignored
};

class C : virtual public A
{
public:
    C() : A(20){}; // the left an right classses are constructors of the base class are ignored
};

class D : public B, public C
{
public:
    D() : A(30){}; // only the constructor of A through A is considered
};

int main()
{
    D d;
    d.print();
    return 0;
}
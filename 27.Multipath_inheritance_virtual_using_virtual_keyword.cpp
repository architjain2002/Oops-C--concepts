#include <iostream>
using namespace std;
// A derived class with two base classes and these two base classes have one common base class is called multipath inheritance.
// Ambiguity can arise in this type of inheritance.
//  2) Avoiding ambiguity using the virtual base class:
//  According to the above example, Class-D has only one copy of ClassA,
//  therefore, statement 4 will overwrite the value of a, given in statement 3.

class ClassA
{
public:
    int a;
};

class ClassB : virtual public ClassA
{
public:
    int b;
};

class ClassC : virtual public ClassA
{
public:
    int c;
};

class ClassD : public ClassB, public ClassC
{
public:
    int d;
};

int main()
{
    ClassD obj;

    obj.a = 10;  // Statement 3
    obj.a = 100; // Statement 4

    obj.b = 20;
    obj.c = 30;
    obj.d = 40;

    cout << "\n a : " << obj.a;
    cout << "\n b : " << obj.b;
    cout << "\n c : " << obj.c;
    cout << "\n d : " << obj.d << '\n';
}

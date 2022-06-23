// C++ program demonstrating ambiguity in Multipath
// Inheritance

// A derived class with two base classes and these two base classes have one common base class is called multipath inheritance.
// Ambiguity can arise in this type of inheritance.
#include <iostream>
using namespace std;

class ClassA
{
public:
    int a;
};

class ClassB : public ClassA
{
public:
    int b;
};

class ClassC : public ClassA
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

    // obj.a = 10;                  // Statement 1, Error
    // obj.a = 100;                 // Statement 2, Error

    // Avoiding ambiguity using the scope resolution operator:
    // Using the scope resolution operator we can manually specify the path from which data member a will be accessed
    obj.ClassB::a = 10;  // Statement 3
    obj.ClassC::a = 100; // Statement 4

    obj.b = 20;
    obj.c = 30;
    obj.d = 40;

    cout << " a from ClassB  : " << obj.ClassB::a;
    cout << "\n a from ClassC  : " << obj.ClassC::a;

    cout << "\n b : " << obj.b;
    cout << "\n c : " << obj.c;
    cout << "\n d : " << obj.d << '\n';
}
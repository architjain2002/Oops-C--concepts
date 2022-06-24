//  we can also use final specifier and prevent a class from inheritance

// Here we will create one extra class called MakeFinalClass(its default constructor is private).
// This function is used to solve our purpose.
// The main Class MyClass can call the constructor of the MakeFinalClass as they are friend classes.

#include <iostream>
using namespace std;
class MyClass;
class MakeFinalClass
{
private:
    MakeFinalClass()
    {
        cout << "This is constructor of the MakeFinalClass" << endl;
    }
    friend class MyClass;
};
class MyClass : virtual MakeFinalClass
{ // this will be final class
public:
    MyClass()
    {
        cout << "This is constructor of the final Class" << endl;
    }
};
// try to make derived class
class MyDerivedClass : MyClass
{
public:
    MyDerivedClass() // throws error as prevention of derived class creation
    {
        cout << "Constructor of the Derived Class" << endl;
    }
};
main()
{
    MyClass obj;            // this works
    MyDerivedClass derived; // this throw errors
}
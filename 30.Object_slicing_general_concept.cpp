#include <iostream>
using namespace std;

// C++ program to demonstrate what is object slicing
class Base
{
    int x, y;
};

class Derived : public Base
{
    int z, w;
};

int main()
{
    Derived d;

    // Object Slicing,
    // z and w of d are sliced off
    Base b = d; // important --here we slice the entire object unlike upcasting there we use pointers.
}
#include <iostream>
using namespace std;
class Base
{
public:
    void disp()
    {
        cout << " It is the Super function of the Base class ";
    }
};

class derive : public Base
{
public:
    void disp()
    {
        cout << "\n It is the derive class function ";
    }
};

int main()
{
    // create base class pointer
    Base *ptr;

    derive obj; // create object of derive class
    ptr = &obj; // assign the obj address to ptr variable

    // create base class's reference
    Base &ref = obj;
    // Or
    // get disp() function using pointer variable

    ptr->disp();
    ref.disp();
    return 0;
}
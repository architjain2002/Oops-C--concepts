#include <iostream>
using namespace std;
class Parent
{
public:
    void base()
    {
        cout << " It is the function of the Parent class " << endl;
    }
};

class Child : public Parent
{
public:
    void derive()
    {
        cout << " it is the function of the Child class " << endl;
    }
};

int main()
{
    Parent pobj; // create Parent's object
    Child *cobj; // create Child's object

    // explicit type cast is required in downcasting
    cobj = (Child *)&pobj;
    cobj->derive();

    return 0;
}
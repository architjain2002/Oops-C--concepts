#include <iostream>
using namespace std;

class Parent
{
private:
    int id;

public:
    void showid()
    {
        cout << " I am in the Parent class " << endl;
    }
};

class Myson : public Parent
{
public:
    void disp()
    {
        cout << " I am in the Myson class " << endl;
    }
};

int main(int argc, char *argv[])
{
    // create object of the Parent class
    Parent par_obj;

    // create object of the Myson class
    Myson my_obj;

    // upcast - here upcasting can be done implicitly
    Parent *ptr1 = &my_obj; // base class's reference the derive class's object

    // downcast - here typecasting is done explicitly
    Myson *ptr2 = (Myson *)&par_obj;

    // Upcasting is safe:
    ptr1->showid();
    ptr2->showid();

    // downcasting is unsafe:
    ptr2->disp();
    getchar();
    return 0;
}

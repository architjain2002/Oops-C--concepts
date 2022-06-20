// copy constructor

#include <iostream>
using namespace std;

class Base
{

private:
    int x;
    int y;

public:
    Base(int x, int y)
    {
        cout << "Base constructor is called" << endl;
        this->x = x;
        this->y = y;
    }
    Base(const Base &b) // copy constructor syntax is class_name(const class_name &obj)  this is a deep copy as we are giving a user defined copy constructor
    {
        cout << "copy constructor is called" << endl;
        this->x = b.x;
        this->y = b.y;
    }

    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};

// where copy constructor is not defined.. then the compiler creates its own copy constructor..and the copy is shallow copy

class Sample
{
    int id;

public:
    void init(int x)
    {
        id = x;
    }
    void display()
    {
        cout << endl
             << "ID=" << id;
    }
};

// driver code
int main(int argc, char const *argv[])
{

    // for base class
    Base b1(5, 10);
    Base b2 = b1; // copy constructor is called

    cout << "x = " << b2.getX() << "\ny = " << b2.getY() << endl;

    // for sample class
    Sample obj1;
    obj1.init(10);
    obj1.display();

    Sample obj2(obj1); // or obj2=obj1;
    obj2.display();
    return 0;
}

// 1.Using Friend Class : If we want that class should not be instantiated by anyone else but only by a friend class.

#include <iostream>
using namespace std;

class Base
{
private: // here the constructor is private in nature
    Base()
    {
        cout << "default private constructor is called" << endl;
    }
    friend class friendClass;
};

class friendClass // basically a friend class can access the private and protected members of the base class
{
public:
    friendClass() //  hence we can use constructor or any other member function to invoke the constructor
    {
        Base b1;
        cout << "constructor of the friendClass is called" << endl;
    }
};

// 2. Using Singleton design pattern : When we want to design a singleton class.
// This means instead of creating several objects of class,
// the system is driven by a single object or a very limited number of objects.

// Singleton design pattern is a software design principle that is used to restrict the instantiation of a class to one object.
//  This is useful when exactly one object is needed to coordinate actions across the system.

class Singleton
{
    static Singleton *instance;
    int data;

    // Private constructor so that no objects can be created.
    Singleton()
    {
        data = 0;
    }

public:
    static Singleton *getInstance() // by doing this we limit our instance to a single instance
    {
        if (!instance) // important checks whether the instance is created or not. if created do not create and return else call the constructor
            instance = new Singleton;
        return instance;
    }

    int getData()
    {
        return this->data;
    }

    void setData(int data)
    {
        this->data = data;
    }
};
// Initialize pointer to zero so that it can be initialized in first call to getInstance
Singleton *Singleton::instance = 0;

// driver function
int main(int argc, char const *argv[])
{
    // Base b1; // this will throw error as the constructor here is private hence we get an error

    friendClass fr; // this works

    Singleton *s = s->getInstance(); // to get the instance
    cout << s->getData() << endl;    // to get the data
    s->setData(100);                 // to set the data
    cout << s->getData() << endl;

    Singleton *s2 = s2->getInstance(); //  this does not create a new instance and basically s2 and s points to the same instance
    cout << s2->getData() << endl;     // we get the same 100 as output
    return 0;
}

/*******************************************************
 * Copyright (C) 2022 Archit Jain arcyjain2002@gmail.com
 *
 * This file is part of my work.
 *
 * Dont worry you can copy and/or distribute without the express
 * permission of Archit Jain lol.
 *******************************************************/
// ────█▀█▄▄▄▄─────██▄
// ────█▀▄▄▄▄█─────█▀▀█
// ─▄▄▄█─────█──▄▄▄█
// ██▀▄█─▄██▀█─███▀█
// ─▀▀▀──▀█▄█▀─▀█▄█▀

#include <iostream>
using namespace std;

class Base
{

public:
    virtual ~Base() = 0; // initialization of pure destruction
};

Base::~Base() // Explicit destructor call   we need a function body for a pure virtual destructor because
              // they are not actually ‘overridden’,
              // rather they are always called in the reverse order of the class derivation.
              // This means that a derived class destructor will be invoked first, then the base class destructor will be called.If the definition of the pure virtual destructor is not provided,
              // then what function body will be called during object destruction ?
              // Therefore the compiler and linker enforce the existence of a function body for pure virtual destructors.
{
    std::cout << "Pure virtual destructor is called";
}

class Derived : public Base
{
public:
    ~Derived()
    {
        cout << "derived class destructor" << endl;
    }
};

int main(int argc, char const *argv[])

{
    // base class pointer which is
    // allocating fresh storage
    // for Derived function object's
    // Base x; // this will throw error as only pointers can be accepted in pure virtual destructor

    //     Why Can't We Make an Abstract Class Object?
    // When we construct a pure virtual function in Abstract, we reserve a slot in the VTABLE(discussed in the previous topic) for a function, but we don't put any address in that slot. As a result, the VTABLE will be unfinished.

    // Since the VTABLE for the Abstract class is missing, the compiler will refuse to let you create an object for it and will show an error message if you try.

    Base *b = new Derived();
    delete b;

    return 0;
}

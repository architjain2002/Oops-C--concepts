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

// A class is abstract if it has at least one pure virtual function.
// In the following example, Test is an abstract class because it has a pure virtual function show().
// If we do not override the pure virtual function in derived class,
// then derived class also becomes abstract class.
// An abstract class can have constructors.

class Base
{
public:
    virtual void show() = 0; // pure virtual function
};

class Derived : public Base
{
public:
    void show() { cout << "In Derived \n"; }
};

int main(void)
{
    Base *bp = new Derived();
    bp->show();
    return 0;
}
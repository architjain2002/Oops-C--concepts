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

// The virtual mechanism works only when we have a base class pointer to a derived class object.
//  In C++,
//  the constructor cannot be virtual, because when a constructor of a class is executed there is no virtual table in the memory,
//  means no virtual pointer defined yet.
//  So, the constructor should always be non - virtual.
//  But virtual destructor is possible.

#include <iostream>
using namespace std;
class b
{
public:
    b()
    {
        cout << "Constructing base \n";
    }
    virtual ~b() // necessary because the compiler wouldnt then know whether the derived class object is deleted or not.
                 // try doing this without virtual
    {
        cout << "Destructing base \n";
    }
};
class d : public b
{
public:
    d()
    {
        cout << "Constructing derived \n";
    }
    ~d()
    {
        cout << "Destructing derived \n";
    }
};
int main(void)
{
    d *derived = new d();
    b *bptr = derived;
    delete bptr;
    return 0;
}

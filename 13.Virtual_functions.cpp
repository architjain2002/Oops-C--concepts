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

// CPP program to illustrate
// working of Virtual Functions

// A virtual function is a member function which is declared within a base class and is re-defined (overridden) by a derived class.
// When you refer to a derived class object using a pointer or a reference to the base class,
// you can call a virtual function for that object and execute the derived class’s version of the function.

// some points
// 1.Virtual functions cannot be static.
// 2.A virtual function can be a friend function of another class.
// 3.Virtual functions should be accessed using pointer or reference of base class type to achieve runtime polymorphism.
#include <iostream>
using namespace std;

class base
{
public:
    void fun_1() { cout << "base-1\n"; }
    virtual void fun_2() { cout << "base-2\n"; }
    virtual void fun_3() { cout << "base-3\n"; }
    virtual void fun_4() { cout << "base-4\n"; }
};

class derived : public base
{
public:
    void fun_1() { cout << "derived-1\n"; }
    void fun_2() { cout << "derived-2\n"; }
    void fun_4(int x) { cout << "derived-4\n"; }
};

int main()
{
    base *p;
    derived obj1;
    p = &obj1;

    // Early binding because fun1() is non-virtual
    // in base
    p->fun_1();

    // Late binding (RTP)
    p->fun_2();

    // Late binding (RTP)
    p->fun_3();

    // Late binding (RTP)
    p->fun_4();

    // Early binding but this function call is
    // illegal (produces error) because pointer
    // is of base type and function is of
    // derived class
    // p->fun_4(5);

    return 0;
}
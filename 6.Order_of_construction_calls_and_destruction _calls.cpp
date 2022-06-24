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

// C++ program to show the order of constructor calls
// in Multiple Inheritance
// Whenever the derived class’s default constructor is called,
// the base class’s default constructor is called automatically.

#include <iostream>
using namespace std;

// first base class
class Parent
{

public:
    // first base class's Constructor
    Parent()
    {
        cout << "Inside first base class" << endl;
    }
    // first base class's Constructor
    ~Parent()
    {
        cout << "Parent Destructor" << endl;
    }
};

// child class inherits parent
class Child : public Parent
{
public:
    // child class's Constructor
    Child()
    {
        cout << "Inside child class" << endl;
    }
    ~Child()
    {
        cout << "Child Destructor" << endl;
    }
};

// grandchild class inherits child
class grandChild : public Child
{
public:
    // child class's Constructor
    grandChild()
    {
        cout << "Inside grandchild class" << endl;
    }
    ~grandChild()
    {
        cout << "Grandchild Destructor" << endl;
    }
};

// main function
int main()
{

    // creating object of class Child
    grandChild obj1;
    return 0;
}

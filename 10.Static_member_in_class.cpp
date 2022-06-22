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

// C++ program to demonstrate static
// variables inside a class

// Static variables in a class :
// As the variables declared as static are initialized only once as they are allocated space in separate static storage so,
// the static variables in a class are shared by the objects.
// There can not be multiple copies of same static variables for different objects.
// Also because of this reason static variables can not be initialized using constructors.
#include <iostream>
using namespace std;

class GfG
{
public:
    static int i;

    GfG(){
        // Do nothing
    };
};

int GfG::i = 0; // syntax to access the static members of a clas

int main()
{
    GfG obj1;
    GfG obj2;
    obj1.i = 2; // it will throw error the static members can be called by the scope resolution operator
    obj2.i = 3;

    // prints value of i
    cout << obj1.i << " " << obj2.i;
}
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
// when not using static keyword

// Class objects as static :
// Just like variables, objects also when declared as static have a scope till the lifetime of program.
// Consider the below program where the object is non - static.

#include <iostream>
using namespace std;

class GfG
{
    int i;

public:
    GfG()
    {
        i = 0;
        cout << "Inside Constructor\n";
    }
    ~GfG()
    {
        cout << "Inside Destructor\n";
    }
};

int main()
{
    int x = 0;
    if (x == 0)
    {
        GfG obj1; // non static member has its life only in the scope
    }
    cout << "after if 1\n";

    cout << "\n"; // just some space

    if (x == 0)
    {
        static GfG obj2; //  the static objects has its life until the program dies
    }
    cout << "after if 2\n";
    return 0;
}
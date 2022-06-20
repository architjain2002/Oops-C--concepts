/*******************************************************
 * Copyright (C) 2022 Archit Jain arcyjain2002@gmail.com
 *
 * This file is part of my work.
 *
 * Dont worry you can copy and/or distribute without the express
 * permission of Archit Jain lol.
 *******************************************************/
// ─────▄───▄
// ─▄█▄─█▀█▀█─▄█▄
// ▀▀████▄█▄████▀▀
// ─────▀█▀█▀

#include <iostream>
using namespace std;

class Base //  we overload the constructor with certain parameters
{

public:
    Base() // default constructor is called
    {

        cout << "default constructor is called" << endl;
    }

    Base(int x) // constructor with 1 parameter
    {

        cout << "constructor with 1 parameter is called with value " << x << endl;
    }
};

int main(int argc, char const *argv[])
{
    Base b1;      // no parameters passed
    Base b2(100); // parameter is passed as 100
    return 0;
}

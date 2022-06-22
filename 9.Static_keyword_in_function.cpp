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

// C++ program to demonstrate
// the use of static Static
// variables in a Function

// Static variables in a Function:
// When a variable is declared as static,
// space for it gets allocated for the lifetime of the program.
// Even if the function is called multiple times,
// space for the static variable is allocated only once and the value of variable in the previous call gets carried through the next function call.
// This is useful for implementing coroutines in C/C++ or any other application where previous state of function needs to be stored.
#include <iostream>
#include <string>
using namespace std;

void demo()
{
    // static variable
    static int count = 0;
    cout << count << " ";

    // value is updated and
    // will be carried to next
    // function calls
    count++;
}

int main()
{
    for (int i = 0; i < 5; i++)
        demo();
    return 0;
}
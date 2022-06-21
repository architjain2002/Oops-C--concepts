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

class Test
{
private:
    ~Test() {}

public:
    friend void destructTest(Test *);
};
void destructTest(Test *ptr) { delete ptr; }
int main()
{

    // Test t; // this will throw error as the destructor is privated here

    Test *t = new Test; // this will work as the pointers or the dynamic objects do not call the destructor.
                        // When something is created using dynamic memory allocation, it is the programmer’s responsibility to delete it.So compiler doesn’t bother.

    // delete t; // this will again throw error as the delete calls the destructor and destructor is private hence we use the friend function to delete.

    // destruct the object
    destructTest(t); // this will work fine as the friend func can access all the private members of the class.

    return 0;
}
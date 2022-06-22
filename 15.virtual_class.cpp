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

// We create a Class A and then two of its derived classes Class B and Class C.
// Class A has a method that prints out a statement.All the derived classes must have inherited data members from Class A.

// Next,we declare Class D which inherits class B and class C.Since Classes,
// B and C are child classes of A and then D is the child class of B and C,
// Class D inherits data members of Class A from both B and C.
// Hence, duplication occurs and the compiler doesn’t know what to execute and throws an error.
// But this situation is avoided if the virtual base class is used.

#include <iostream>
using namespace std;
class A
{
public:
    void display()
    {
        cout << "Hello form Class A \n";
    }
};

class B1 : public A
{
};

class C1 : public A
{
};

class B2 : virtual public A // making the function virtual does not create extra duplicates
{
};

class C2 : virtual public A // making the function virtual does not create extra duplicates
{
};

class D : public B1, public C1
{
};

class E : public B2, public C2
{
};
int main()
{
    D object1;
    // object1.display(); // this will throw error like ambiguous
    E object2;
    object2.display(); // this removes the ambiguous eror
}
/*
Operators that can be overloaded

 *Uniary operators
 *Binary operators
 *Special operators ( [ ], () etc)
 *Binary Arithmetic     ->     +, -, *, /, %
 *Unary Arithmetic     ->     +, -, ++, —
 *Assignment     ->     =, +=,*=, /=,-=, %=
 *Bit- wise      ->     & , | , << , >> , ~ , ^
 *De-referencing     ->     (->)
 *Dynamic memory allocation and De-allocation     ->     New, delete
 *Subscript     ->     [ ]
 *Function call     ->     ()
 *Logical      ->     &,  | |, !
 *Relational     ->     >, < , = =, <=, >=

Operators that cannot be overloaded

 *Scope resolution operator                                : :
 *Member selection operator                                 .
 *Member selection through                                  *
 *Conditional operator                                      ? :
 *Sizeof operator                                           sizeof()

*/

#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // This is automatically called when '+' is used with
    // between two Complex objects
    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print() { cout << real << " + i" << imag << '\n'; }
};

int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    // The statement ComplexNumber c3 = c1 + c2; is internally translated as ComplexNumber c3 = c1.operator+ (c2);
    // in order to invoke the operator function.
    c3.print();
}

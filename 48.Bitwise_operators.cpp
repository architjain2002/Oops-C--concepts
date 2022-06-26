#include <iostream>
using namespace std;

int main()
{
    unsigned int p = 60; // 60 = 0011 1100
    unsigned int q = 13; // 13 = 0000 1101
    int z = 0;

    z = p & q;
    cout << "p&q is : " << z << endl; // 12 = 0000 1100

    z = p | q;
    cout << "p|q is : " << z << endl; // 61 = 0011 1101

    z = p ^ q;
    cout << "p^q is : " << z << endl; // 49 = 0011 0001

    z = ~p;
    cout << "~p is : " << z << endl; // -61 = 1100 0011

    z = p << 2;
    cout << "p<<2 is: " << z << endl; // 240 = 1111 0000

    z = p >> 2;
    cout << "p>>2 is : " << z << endl; // 15 = 0000 1111

    return 0;
}
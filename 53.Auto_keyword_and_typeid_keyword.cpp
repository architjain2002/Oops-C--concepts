// C++ program to demonstrate working of auto
// and type inference

#include <bits/stdc++.h>
using namespace std;

class hello
{
public:
    int a;
    hello()
    {
        a = 10;
    }
};
int main()
{
    // auto a; this line will give error
    // because 'a' is not initialized at
    // the time of declaration
    // a=33;

    // see here x ,y,ptr are
    // initialised at the time of
    // declaration hence there is
    // no error in them
    auto x = 4;
    auto y = 3.37;
    auto ptr = &x;
    auto str = "string";
    auto *obj = new hello();
    auto *obj1 = &obj;
    cout
        << typeid(x).name() << endl     // i - integer type
        << typeid(y).name() << endl     // d - double type
        << typeid(ptr).name() << endl   // Pi - pointer to integer
        << typeid(str).name() << endl   // PKc - pointer(P) to const(K) char(c)
        << typeid(obj).name() << endl   // P5hello - pointer to class hello (5 char class name)
        << typeid(obj1).name() << endl; // PP5hello - pointer to pointer to class hello (5 char class name)
    return 0;
}

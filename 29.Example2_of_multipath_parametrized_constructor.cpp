// here we are not using constructor hence the compiler does not face any ambiguity of intitialization

// these two examples are very close to each other and hence a good way of understanding

// important example
#include <iostream>
using namespace std;

class A
{
    int x;

public:
    void setX(int i) { x = i; }
    void print() { cout << x; }
};

class B : virtual public A
{
public:
    B() { setX(10); }
};

class C : virtual public A
{
public:
    C() { setX(20); }
};

class D : public B, public C
{
};

int main()
{
    D d;
    d.print();
    return 0;
}
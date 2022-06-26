#include <iostream>
using namespace std;

int main()
{
    int a = 11;
    int b = 5;

    cout << "a=11, b=5" << endl;
    if (a == b)
    {
        cout << "a == b is true" << endl;
    }
    else
    {
        cout << " a == b is false" << endl;
    }

    if (a < b)
    {
        cout << "a < b is true" << endl;
    }
    else
    {
        cout << "a < b is false" << endl;
    }

    if (a > b)
    {
        cout << "a > b is true" << endl;
    }
    else
    {
        cout << "a > b is false" << endl;
    }

    return 0;
}
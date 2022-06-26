#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 2, c = 6, d = 4;
    if (a == b && c > d)
        cout << "a equals to b AND c is greater than d\n";
    else
        cout << "AND operation returned false\n";

    if (a == b || c > d)
        cout << "a equals to b OR c is greater than d\n";
    else
        cout << "Neither a is equal to b nor c is greater than d\n";

    if (!b)
        cout << "b is zero\n";
    else
        cout << "b is not zero";

    return 0;
}
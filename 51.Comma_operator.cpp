#include <iostream>
using namespace std;
int main()
{
    int x, y;
    y = 100;
    x = (y++, y + 10, 99 + y);
    cout << x;
    return 0;
}
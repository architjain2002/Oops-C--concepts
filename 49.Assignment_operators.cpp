#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    cout << "Initial value of x is " << x << "\n";

    x += 5;
    cout << "x += 5 gives :" << x << "\n";

    x -= 5;
    cout << "x -= 5 gives : " << x << "\n";

    x *= 5;
    cout << "x *= 5 gives :" << x << "\n";

    x /= 5;
    cout << "x /= 5 gives : " << x << "\n";

    return 0;
}
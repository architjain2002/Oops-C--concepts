// C++ program to demonstrate the
// the above concept

// f you try to initialize the const variable without assigning an explicit value then a compile-time error (CTE) is generated.
#include <iostream>
using namespace std;

// Driver Code
int main()
{

    // const int x; CTE error
    // x = 9; CTE error
    const int y = 10;
    cout << y;

    return 0;
}

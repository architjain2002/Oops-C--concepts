// C++ program to demonstrate the
// above concept

// syntax : const int* x or int const* y;
#include <iostream>
using namespace std;

// Driver Code
int main()
{
    int x{10};
    char y{'M'};

    const int *i = &x;
    const char *j = &y;

    // Value of x and y can be altered,
    // they are not constant variables
    x = 9;
    y = 'A';

    // Change of constant values because,
    // i and j are pointing to const-int
    // & const-char type value
    // *i = 6;
    // *j = 7;

    cout << *i << " " << *j;
}

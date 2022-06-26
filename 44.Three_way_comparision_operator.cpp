// C++ 20 program to illustrate the
// 3 way comparison operator
#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{
    float A = -0.0;
    float B = 0.0;

    // Find the value of 3 way comparison
    auto ans = A <= > B; // c++20 version

    // If ans is less than zero
    if (ans < 0)
        cout << "-0 is less than 0";

    // If ans is equal to zero
    else if (ans == 0)
        cout << "-0 and 0 are equal";

    // If ans is greater than zero
    else if (ans > 0)
        cout << "-0 is greater than 0";

    return 0;
}

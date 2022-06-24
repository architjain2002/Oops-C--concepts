// C++ program to demonstrate the
// above concept

// syntax: int *const x;
#include <iostream>
using namespace std;

// Driver Code
int main()
{
    // x and z non-const var
    int x = 5;
    int z = 6;

    // y and p non-const var
    char y = 'A';
    char p = 'C';

    // const pointer(i) pointing
    // to the var x's location
    int *const i = &x;

    // const pointer(j) pointing
    // to the var y's location
    char *const j = &y;

    // The values that is stored at the memory location can modified
    // even if we modify it through the pointer itself
    // No CTE error
    *i = 10;
    *j = 'D';

    // CTE because pointer variable
    // is const type so the address
    // pointed by the pointer variables
    // can't be changed
    // *i = &z;
    // *j = &p;

    cout << *i << " and " << *j
         << endl;
    cout << i << " and " << j;

    return 0;
}

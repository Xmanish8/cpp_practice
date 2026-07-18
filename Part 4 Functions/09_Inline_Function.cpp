/*
===========================================
         Inline Function
===========================================

Theory:
--------
An inline function suggests the compiler
replace the function call with the function's
actual code to reduce function call overhead.

Syntax:
inline return_type function_name(parameters)

===========================================
*/

#include <iostream>
using namespace std;

inline int cube(int n)
{
    return n * n * n;
}

int main()
{
    cout << "Cube = " << cube(4);

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Cube = 64

=======================================
*/
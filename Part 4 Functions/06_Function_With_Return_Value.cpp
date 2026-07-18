/*
===========================================
     Function with Return Value
===========================================

Theory:
--------
A function can return a value using
the return statement.

===========================================
*/

#include <iostream>
using namespace std;

int square(int number)
{
    return number * number;
}

int main()
{
    int result = square(6);

    cout << "Square = " << result;

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Square = 36

=======================================
*/
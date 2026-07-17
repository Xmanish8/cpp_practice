/*
===========================================
            while Loop in C++
===========================================

Theory:
--------
The while loop repeatedly executes a block of code
as long as the given condition is true.

Syntax:
while(condition)
{
    // statements
}

The condition is checked before each iteration.

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    cout << "Numbers from 1 to 10:\n\n";

    while (i <= 10)
    {
        cout << i << " ";
        i++;
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Numbers from 1 to 10:

1 2 3 4 5 6 7 8 9 10

=======================================
*/
/*
===========================================
        continue Statement in C++
===========================================

Theory:
--------
The continue statement skips the current iteration
and moves to the next iteration of the loop.

Syntax:
continue;

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Numbers from 1 to 10 (Skipping 5):\n\n";

    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }

        cout << i << " ";
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Numbers from 1 to 10 (Skipping 5):

1 2 3 4 6 7 8 9 10

=======================================
*/
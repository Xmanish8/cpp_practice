/*
===========================================
          break Statement in C++
===========================================

Theory:
--------
The break statement immediately terminates
the nearest loop or switch statement.

Syntax:
break;

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Numbers from 1 to 10:\n\n";

    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            break;
        }

        cout << i << " ";
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Numbers from 1 to 10:

1 2 3 4 5

=======================================
*/
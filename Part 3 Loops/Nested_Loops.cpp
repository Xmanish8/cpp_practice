/*
===========================================
            Nested Loops in C++
===========================================

Theory:
--------
A nested loop is a loop inside another loop.

The inner loop completes all its iterations
for every iteration of the outer loop.

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "5 x 5 Star Pattern\n\n";

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

5 x 5 Star Pattern

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

=======================================
*/
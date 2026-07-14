/*
===========================================
            for Loop in C++
===========================================

Theory:
--------
The 'for' loop is used to execute a block of code
a fixed number of times.

Syntax:
for(initialization; condition; increment/decrement)
{
    // statements
}

Working:
1. Initialization executes once.
2. Condition is checked.
3. Loop body executes if the condition is true.
4. Increment/Decrement executes.
5. Steps 2-4 repeat until the condition becomes false.

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Numbers from 1 to 10:\n\n";

    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Numbers from 1 to 10:

1 2 3 4 5 6 7 8 9 10

=======================================
*/

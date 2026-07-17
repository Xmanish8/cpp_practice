/*
===========================================
          do-while Loop in C++
===========================================

Theory:
--------
The do-while loop executes the loop body at least
once because the condition is checked after execution.

Syntax:
do
{
    // statements
}
while(condition);

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    cout << "Numbers from 1 to 10:\n\n";

    do
    {
        cout << i << " ";
        i++;
    }
    while (i <= 10);

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Numbers from 1 to 10:

1 2 3 4 5 6 7 8 9 10

=======================================
*/
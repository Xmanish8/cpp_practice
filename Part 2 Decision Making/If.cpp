/*
===========================================
            if Statement in C++
===========================================

Theory:
--------
The 'if' statement executes a block of code only
when the given condition is true.

Syntax:
if(condition)
{
    // statements
}

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0)
    {
        cout << number << " is Positive.";
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Enter a number: 25
25 is Positive.

=======================================
*/

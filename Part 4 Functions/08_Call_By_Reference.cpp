/*
===========================================
         Call by Reference
===========================================

Theory:
--------
The original variable is passed using
a reference. Changes affect the original value.

===========================================
*/

#include <iostream>
using namespace std;

void increment(int &num)
{
    num++;
}

int main()
{
    int number = 10;

    increment(number);

    cout << "Updated Value = " << number;

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Updated Value = 11

=======================================
*/
/*
===========================================
          Call by Value
===========================================

Theory:
--------
A copy of the variable is passed to the
function. Changes made inside the function
do not affect the original variable.

===========================================
*/

#include <iostream>
using namespace std;

void increment(int num)
{
    num++;
    cout << "Inside Function : " << num << endl;
}

int main()
{
    int number = 10;

    increment(number);

    cout << "Outside Function: " << number;

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Inside Function : 11
Outside Function: 10

=======================================
*/
/*
===========================================
      Function with Parameters
===========================================

Theory:
--------
Parameters allow values to be passed to
a function.

===========================================
*/

#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout << "Sum = " << a + b;
}

int main()
{
    add(15, 25);

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Sum = 40

=======================================
*/
/*
===========================================
       Function Overloading
===========================================

Theory:
--------
Function overloading allows multiple
functions to have the same name with
different parameter lists.

===========================================
*/

#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int main()
{
    cout << "Integer Sum : " << add(10, 20) << endl;
    cout << "Double Sum  : " << add(10.5, 20.5);

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Integer Sum : 30
Double Sum  : 31

=======================================
*/
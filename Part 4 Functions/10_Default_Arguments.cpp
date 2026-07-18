/*
===========================================
        Default Arguments
===========================================

Theory:
--------
Default arguments allow parameters to
have predefined values if no argument
is supplied during the function call.

===========================================
*/

#include <iostream>
using namespace std;

void greet(string name = "Guest")
{
    cout << "Welcome " << name;
}

int main()
{
    greet();
    cout << endl;
    greet("Manish");

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Welcome Guest
Welcome Manish

=======================================
*/
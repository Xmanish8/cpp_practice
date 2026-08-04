/*
===========================================
       String Comparison in C++
===========================================

Theory:
--------
String comparison is used to check whether
two strings are equal or not.

The comparison operators (==, !=, <, >)
can be used with string objects.

Syntax:
-------
string1 == string2

Working:
--------
1. Create two strings.
2. Compare them using '=='.
3. Display whether they are equal or not.

Time Complexity:
----------------
O(n)

Space Complexity:
-----------------
O(1)

===========================================
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string password = "admin123";
    string userInput = "admin123";

    if (password == userInput)
    {
        cout << "Strings are Equal.";
    }
    else
    {
        cout << "Strings are Not Equal.";
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Strings are Equal.

=======================================
*/
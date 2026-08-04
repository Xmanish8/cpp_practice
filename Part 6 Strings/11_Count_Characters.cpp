/*
===========================================
      Count Characters in a String
===========================================

Theory:
--------
The total number of characters in a string
can be obtained using length().

Syntax:
-------
string.length()

Working:
--------
1. Create a string.
2. Call length().
3. Display the total number of characters.

Time Complexity:
----------------
O(1)

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
    string text = "C++ Programming";

    cout << "String     : " << text << endl;
    cout << "Characters : " << text.length();

    return 0;
}

/*
============ SAMPLE OUTPUT ============

String     : C++ Programming
Characters : 15

=======================================
*/
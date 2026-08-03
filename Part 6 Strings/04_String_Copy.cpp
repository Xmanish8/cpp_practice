/*
===========================================
          String Copy in C++
===========================================

Theory:
--------
Copying a string means creating another string
with the same content as the original string.

The assignment operator (=) can be used to
copy one string into another.

Syntax:
-------
string2 = string1;

Working:
--------
1. Create an original string.
2. Declare another string.
3. Copy the original string using '='.
4. Display both strings.

Time Complexity:
----------------
O(n)

Space Complexity:
-----------------
O(n)

===========================================
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Original String
    string original = "C++ Programming";

    // Copy String
    string copy;

    copy = original;

    cout << "Original String : " << original << endl;
    cout << "Copied String   : " << copy << endl;

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Original String : C++ Programming
Copied String   : C++ Programming

=======================================
*/
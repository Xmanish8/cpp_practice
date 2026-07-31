/*
===========================================
        Character Array in C++
===========================================

Theory:
--------
A Character Array is an array of characters
used to store a sequence of characters
terminated by the null character '\0'.

It is the traditional way of handling strings
in C before the introduction of the string class.

Syntax:
-------
char array_name[size];

Example:
char name[20] = "Manish";

Working:
--------
1. Declare a character array.
2. Initialize it with a string.
3. Print the character array.
4. Each character is stored in consecutive
   memory locations.

Time Complexity:
----------------
O(n)

Space Complexity:
-----------------
O(n)

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    // Character Array
    char name[20] = "Manish";

    cout << "Character Array:\n\n";
    cout << "Name : " << name << endl;

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Character Array:

Name : Manish

=======================================
*/
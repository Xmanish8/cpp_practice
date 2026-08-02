/*
===========================================
        String Length in C++
===========================================

Theory:
--------
The length() function returns the total
number of characters present in a string.

Syntax:
-------
string.length();

or

string.size();

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
    string language = "C++ Programming";

    cout << "String : " << language << endl;
    cout << "Length : " << language.length();

    return 0;
}

/*
============ SAMPLE OUTPUT ============

String : C++ Programming
Length : 15

=======================================
*/
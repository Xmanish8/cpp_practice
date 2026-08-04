/*
===========================================
      String Concatenation in C++
===========================================

Theory:
--------
Concatenation means joining two or more
strings into a single string.

The '+' operator or append() function can
be used for concatenation.

Syntax:
-------
string3 = string1 + string2;

or

string1.append(string2);

Working:
--------
1. Create two strings.
2. Join them using '+'.
3. Store the result.
4. Display the concatenated string.

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
    string firstName = "Manish";
    string lastName = "Marathe";

    string fullName = firstName + " " + lastName;

    cout << "First Name : " << firstName << endl;
    cout << "Last Name  : " << lastName << endl;
    cout << "Full Name  : " << fullName << endl;

    return 0;
}

/*
============ SAMPLE OUTPUT ============

First Name : Manish
Last Name  : Marathe
Full Name  : Manish Marathe

=======================================
*/
/*
===========================================
      String Input & Output in C++
===========================================

Theory:
--------
Strings can be entered using:
1. cin
2. getline()

'cin' reads input until whitespace.

'getline()' reads the complete line,
including spaces.

Syntax:
-------
cin >> string;

getline(cin, string);

Working:
--------
1. Declare a string variable.
2. Read input using getline().
3. Display the entered string.

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
    string name;

    cout << "Enter Your Full Name: ";
    getline(cin, name);

    cout << "\nEntered Name: " << name;

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Enter Your Full Name:
Manish Marathe

Entered Name:
Manish Marathe

=======================================
*/
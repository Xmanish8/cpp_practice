/*
===========================================
      Convert String to Uppercase
===========================================

Theory:
--------
Uppercase conversion changes every lowercase
alphabet into its uppercase equivalent.

The toupper() function from <cctype> is used.

Syntax:
-------
toupper(character);

Working:
--------
1. Traverse the string.
2. Convert every character using toupper().
3. Display the modified string.

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
#include <cctype>
using namespace std;

int main()
{
    string text = "Programming in C++";

    for (int i = 0; i < text.length(); i++)
    {
        text[i] = toupper(text[i]);
    }

    cout << "Uppercase String:\n\n";
    cout << text;

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Uppercase String:

PROGRAMMING IN C++

=======================================
*/
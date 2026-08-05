/*
===========================================
      Convert String to Lowercase
===========================================

Theory:
--------
Lowercase conversion changes every uppercase
alphabet into its lowercase equivalent.

The tolower() function from <cctype> is used.

Syntax:
-------
tolower(character);

Working:
--------
1. Traverse the string.
2. Convert every character using tolower().
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
    string text = "PROGRAMMING IN C++";

    for (int i = 0; i < text.length(); i++)
    {
        text[i] = tolower(text[i]);
    }

    cout << "Lowercase String:\n\n";
    cout << text;

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Lowercase String:

programming in c++

=======================================
*/
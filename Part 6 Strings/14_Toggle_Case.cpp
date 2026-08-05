/*
===========================================
         Toggle Case in C++
===========================================

Theory:
--------
Toggle case converts:
- Uppercase → Lowercase
- Lowercase → Uppercase

Syntax:
-------
islower(character)
isupper(character)

Working:
--------
1. Traverse the string.
2. Check whether each character is uppercase
   or lowercase.
3. Convert accordingly.
4. Display the modified string.

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
    string text = "Programming In C++";

    for (int i = 0; i < text.length(); i++)
    {
        if (islower(text[i]))
            text[i] = toupper(text[i]);
        else if (isupper(text[i]))
            text[i] = tolower(text[i]);
    }

    cout << "Toggle Case String:\n\n";
    cout << text;

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Toggle Case String:

pROGRAMMING iN c++

=======================================
*/
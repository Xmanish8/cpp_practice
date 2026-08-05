/*
===========================================
      Remove White Spaces in C++
===========================================

Theory:
--------
Whitespace removal means deleting all spaces
from a string.

Working:
--------
1. Traverse the string.
2. Ignore whitespace characters.
3. Store remaining characters.
4. Display the new string.

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
    string text = "C++ Programming Language";
    string result = "";

    for (char ch : text)
    {
        if (ch != ' ')
        {
            result += ch;
        }
    }

    cout << "Original String : " << text << endl;
    cout << "Without Spaces  : " << result;

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Original String : C++ Programming Language
Without Spaces  : C++ProgrammingLanguage

=======================================
*/
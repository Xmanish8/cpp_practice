/*
===========================================
      Replace Substring in C++
===========================================

Theory:
--------
The replace() function replaces a portion
of a string with another string.

Syntax:
-------
replace(position, length, newString);

Working:
--------
1. Search for the substring.
2. Replace it.
3. Display the updated string.

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
using namespace std;

int main()
{
    string text = "I Love Java";
    string oldWord = "Java";
    string newWord = "C++";

    int position = text.find(oldWord);

    if (position != string::npos)
    {
        text.replace(position, oldWord.length(), newWord);
    }

    cout << "Updated String:\n\n";
    cout << text;

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Updated String:

I Love C++

=======================================
*/
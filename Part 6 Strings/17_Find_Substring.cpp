/*
===========================================
        Find Substring in C++
===========================================

Theory:
--------
A substring is a sequence of characters
present inside another string.

The find() function returns the starting
index of the substring.

Syntax:
-------
string.find(substring);

Working:
--------
1. Create the main string.
2. Search for the substring.
3. Display its position if found.

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
    string text = "C++ Programming";
    string word = "Program";

    int position = text.find(word);

    if (position != string::npos)
    {
        cout << "Substring Found at Index : " << position;
    }
    else
    {
        cout << "Substring Not Found.";
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Substring Found at Index : 4

=======================================
*/
/*
===========================================
       Palindrome String in C++
===========================================

Theory:
--------
A palindrome is a string that reads the
same from left to right and right to left.

Examples:
MADAM
LEVEL
RADAR

Syntax:
-------
if(original == reversed)

Working:
--------
1. Store the original string.
2. Create a copy of it.
3. Reverse the copied string.
4. Compare both strings.
5. Display the result.

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
    string original = "MADAM";
    string reversed = original;

    int start = 0;
    int end = reversed.length() - 1;

    while (start < end)
    {
        swap(reversed[start], reversed[end]);
        start++;
        end--;
    }

    if (original == reversed)
    {
        cout << original << " is a Palindrome.";
    }
    else
    {
        cout << original << " is not a Palindrome.";
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

MADAM is a Palindrome.

=======================================
*/
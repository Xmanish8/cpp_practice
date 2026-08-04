/*
===========================================
          Reverse a String in C++
===========================================

Theory:
--------
Reversing a string means arranging its
characters in the opposite order.

The first character becomes the last,
the second becomes the second last,
and so on.

Syntax:
-------
swap(string[start], string[end]);

Working:
--------
1. Initialize two variables:
   - start = 0
   - end = string.length() - 1
2. Swap the first and last characters.
3. Increment start and decrement end.
4. Repeat until start becomes greater than
   or equal to end.

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
    string text = "Programming";

    int start = 0;
    int end = text.length() - 1;

    while (start < end)
    {
        swap(text[start], text[end]);
        start++;
        end--;
    }

    cout << "Reversed String : " << text;

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Reversed String : gnimmargorP

=======================================
*/
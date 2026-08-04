/*
===========================================
        Count Words in a String
===========================================

Theory:
--------
A word is a sequence of characters separated
by spaces.

Working:
--------
1. Assume one word if the string is not empty.
2. Count every space.
3. Total Words = Spaces + 1

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
    string sentence = "C++ is an amazing language";

    int words = 1;

    for (char ch : sentence)
    {
        if (ch == ' ')
        {
            words++;
        }
    }

    cout << "Sentence : " << sentence << endl;
    cout << "Words    : " << words << endl;

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Sentence : C++ is an amazing language
Words    : 5

=======================================
*/
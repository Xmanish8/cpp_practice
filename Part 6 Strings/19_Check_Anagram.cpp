/*
===========================================
          Check Anagram in C++
===========================================

Theory:
--------
Two strings are called anagrams if they contain
the same characters with the same frequency, but
the characters may be arranged in a different order.

Examples:
--------
"listen" and "silent" -> Anagram
"hello" and "world"   -> Not Anagram

Working:
--------
1. Check whether both strings have the same length.
2. Create a frequency array for characters.
3. Increase the frequency for characters in
   the first string.
4. Decrease the frequency for characters in
   the second string.
5. If every frequency becomes zero, the strings
   are anagrams.

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
    string first = "listen";
    string second = "silent";

    // Anagrams must have the same length
    if (first.length() != second.length())
    {
        cout << "Strings are Not Anagrams.";
        return 0;
    }

    // Frequency array for ASCII characters
    int frequency[256] = {0};

    // Count characters from first string
    for (char ch : first)
    {
        frequency[(unsigned char)ch]++;
    }

    // Remove characters from second string
    for (char ch : second)
    {
        frequency[(unsigned char)ch]--;
    }

    // Check frequency values
    for (int i = 0; i < 256; i++)
    {
        if (frequency[i] != 0)
        {
            cout << "Strings are Not Anagrams.";
            return 0;
        }
    }

    cout << "Strings are Anagrams.";

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Strings are Anagrams.

=======================================
*/
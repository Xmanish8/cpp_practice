/*
===========================================
    Count Vowels & Consonants in C++
===========================================

Theory:
--------
A vowel is one of:
A, E, I, O, U (both uppercase and lowercase)

Any alphabet other than vowels is called
a consonant.

Working:
--------
1. Traverse each character.
2. Check whether it is a vowel.
3. Otherwise count it as a consonant.

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
    string text = "Programming";

    int vowels = 0;
    int consonants = 0;

    for (char ch : text)
    {
        ch = tolower(ch);

        if (isalpha(ch))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    cout << "String      : " << text << endl;
    cout << "Vowels      : " << vowels << endl;
    cout << "Consonants  : " << consonants << endl;

    return 0;
}

/*
============ SAMPLE OUTPUT ============

String      : Programming
Vowels      : 3
Consonants  : 8

=======================================
*/
/*
===========================================
    Frequency of Characters in C++
===========================================

Theory:
--------
Frequency means counting how many times each
character appears in a string.

Working:
--------
1. Traverse the string.
2. Skip already counted characters.
3. Count occurrences.
4. Display the frequency.

Time Complexity:
----------------
O(n²)

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
    string text = "programming";

    bool visited[50] = {false};

    cout << "Character Frequencies:\n\n";

    for (int i = 0; i < text.length(); i++)
    {
        if (visited[i])
            continue;

        int count = 1;

        for (int j = i + 1; j < text.length(); j++)
        {
            if (text[i] == text[j])
            {
                count++;
                visited[j] = true;
            }
        }

        cout << text[i] << " : " << count << endl;
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Character Frequencies:

p : 1
r : 2
o : 1
g : 2
a : 1
m : 2
i : 1
n : 1

=======================================
*/
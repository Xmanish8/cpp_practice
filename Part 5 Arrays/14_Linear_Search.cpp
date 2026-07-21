/*
===========================================
          Linear Search in C++
===========================================

Theory:
--------
Linear Search checks each element one by one
until the target element is found.

Time Complexity: O(n)

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 25, 37, 48, 59};

    int size = sizeof(arr) / sizeof(arr[0]);

    int key = 37;
    bool found = false;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at index " << i;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Element not found.";
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Element found at index 2

=======================================
*/
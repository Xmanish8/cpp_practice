/*
===========================================
         Right Rotation in C++
===========================================

Theory:
--------
Right rotation shifts every element one
position to the right. The last element
moves to the first position.

Syntax:
-------
temp = arr[size - 1];

Working:
--------
1. Store the last element.
2. Shift all elements one position right.
3. Place the last element at index 0.
4. Display the rotated array.

Time Complexity:
----------------
O(n)

Space Complexity:
-----------------
O(1)

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    int size = sizeof(arr) / sizeof(arr[0]);

    int temp = arr[size - 1];

    // Shift elements right
    for (int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Place last element at first
    arr[0] = temp;

    cout << "Right Rotated Array:\n\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Right Rotated Array:

50 10 20 30 40

=======================================
*/
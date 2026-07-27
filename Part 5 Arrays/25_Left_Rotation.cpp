/*
===========================================
          Left Rotation in C++
===========================================

Theory:
--------
Left rotation shifts every element of an
array one position to the left. The first
element moves to the last position.

Syntax:
-------
temp = arr[0];

Working:
--------
1. Store the first element in a temporary variable.
2. Shift all elements one position to the left.
3. Place the first element at the last position.
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
    // Original array
    int arr[] = {10, 20, 30, 40, 50};

    int size = sizeof(arr) / sizeof(arr[0]);

    int temp = arr[0];

    // Shift elements left
    for (int i = 0; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    // Place first element at last
    arr[size - 1] = temp;

    cout << "Left Rotated Array:\n\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Left Rotated Array:

20 30 40 50 10

=======================================
*/

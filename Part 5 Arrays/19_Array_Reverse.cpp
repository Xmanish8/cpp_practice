/*
===========================================
          Reverse an Array in C++
===========================================

Theory:
--------
Reversing an array means arranging its
elements in the opposite order. The first
element becomes the last, the second becomes
the second last, and so on.

Syntax:
-------
swap(array[start], array[end]);

Working:
--------
1. Initialize two variables:
   - start = 0
   - end = size - 1
2. Swap the first and last elements.
3. Increment start and decrement end.
4. Continue until start becomes greater than
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
using namespace std;

int main()
{
    // Original array
    int arr[] = {10, 20, 30, 40, 50};

    int size = sizeof(arr) / sizeof(arr[0]);

    int start = 0;
    int end = size - 1;

    // Reverse the array
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "Reversed Array:\n\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Reversed Array:

50 40 30 20 10

=======================================
*/
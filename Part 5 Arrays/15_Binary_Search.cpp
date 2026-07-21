/*
===========================================
          Binary Search in C++
===========================================

Theory:
--------
Binary Search works only on a sorted array.

Time Complexity: O(log n)

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};

    int size = sizeof(arr) / sizeof(arr[0]);

    int key = 40;

    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] == key)
        {
            cout << "Element found at index " << mid;
            return 0;
        }

        if (key < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << "Element not found.";

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Element found at index 3

=======================================
*/
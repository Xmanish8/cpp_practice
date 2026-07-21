/*
===========================================
          Bubble Sort in C++
===========================================

Theory:
--------
Bubble Sort repeatedly compares adjacent
elements and swaps them if required.

Time Complexity: O(n²)

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {64, 34, 25, 12, 22};

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Sorted Array:\n\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Sorted Array:

12 22 25 34 64

=======================================
*/
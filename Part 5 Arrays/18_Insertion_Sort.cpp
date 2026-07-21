/*
===========================================
        Insertion Sort in C++
===========================================

Theory:
--------
Insertion Sort places each element into
its correct position in the sorted part
of the array.

Time Complexity: O(n²)

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 11, 13, 5, 6};

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
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

5 6 11 12 13

=======================================
*/
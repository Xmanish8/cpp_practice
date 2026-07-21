/*
===========================================
        Selection Sort in C++
===========================================

Theory:
--------
Selection Sort repeatedly selects the
smallest element and places it at the
correct position.

Time Complexity: O(n²)

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {29, 10, 14, 37, 13};

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
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

10 13 14 29 37

=======================================
*/
/*
===========================================
        Dynamic Array in C++
===========================================

Theory:
--------
Dynamic arrays are created during runtime
using the new operator. Memory must be
released using delete[].

Syntax:
-------
int *arr = new int[size];
delete[] arr;

Working:
--------
1. Allocate memory dynamically.
2. Store values in the array.
3. Display the elements.
4. Free allocated memory.

Time Complexity:
----------------
O(n)

Space Complexity:
-----------------
O(n)

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int size = 5;

    // Dynamic memory allocation
    int *arr = new int[size];

    // Store values
    for (int i = 0; i < size; i++)
    {
        arr[i] = (i + 1) * 10;
    }

    cout << "Dynamic Array:\n\n";

    // Display elements
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    // Free memory
    delete[] arr;

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Dynamic Array:

10 20 30 40 50

=======================================
*/
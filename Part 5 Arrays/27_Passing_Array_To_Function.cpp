/*
===========================================
      Passing Array to Function
===========================================

Theory:
--------
Arrays can be passed to functions by
providing the array name and its size.
The function receives the base address
of the array.

Syntax:
-------
function(array, size);

Working:
--------
1. Declare a function with array parameter.
2. Pass the array and size from main().
3. Access array elements inside the function.
4. Display the array.

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

// Function to display array
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {5, 10, 15, 20, 25};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array Elements:\n\n";

    display(arr, size);

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Array Elements:

5 10 15 20 25

=======================================
*/
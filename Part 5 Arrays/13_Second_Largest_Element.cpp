/*
===========================================
      Second Largest Element in Array
===========================================

Theory:
--------
The second largest element is the largest value
after the maximum element.

Approach:
1. Find the largest element.
2. Keep track of the second largest element.

===========================================
*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {15, 40, 25, 60, 50};

    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    cout << "Second Largest Element = " << secondLargest;

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Second Largest Element = 50

=======================================
*/
/*
===========================================
 Passing 2D Array to Function in C++
===========================================

Theory:
--------
A two-dimensional array can be passed
to a function by specifying the number
of columns.

Syntax:
-------
function(array, rows);

Working:
--------
1. Create a 2D array.
2. Pass it to the function.
3. Traverse rows and columns.
4. Display the matrix.

Time Complexity:
----------------
O(rows × columns)

Space Complexity:
-----------------
O(1)

===========================================
*/

#include <iostream>
using namespace std;

// Function to display matrix
void display(int arr[][3], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}

int main()
{
    int matrix[2][3] =
    {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "Matrix:\n\n";

    display(matrix, 2);

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Matrix:

1 2 3
4 5 6

=======================================
*/
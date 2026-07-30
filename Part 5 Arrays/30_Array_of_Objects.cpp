/*
===========================================
         Array of Objects in C++
===========================================

Theory:
--------
An array of objects stores multiple objects
of the same class in contiguous memory.
Each object can be accessed using its index.

Syntax:
-------
ClassName object[size];

Working:
--------
1. Create a class.
2. Declare an array of objects.
3. Assign values to each object.
4. Display object details.

Time Complexity:
----------------
O(n)

Space Complexity:
-----------------
O(n)

===========================================
*/

#include <iostream>
#include <string>
using namespace std;

// Student class
class Student
{
public:
    int rollNo;
    string name;
};

int main()
{
    Student students[3];

    students[0] = {101, "Manish"};
    students[1] = {102, "Rahul"};
    students[2] = {103, "Amit"};

    cout << "Student Details:\n\n";

    for (int i = 0; i < 3; i++)
    {
        cout << "Roll No : " << students[i].rollNo << endl;
        cout << "Name    : " << students[i].name << endl;
        cout << endl;
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Student Details:

Roll No : 101
Name    : Manish

Roll No : 102
Name    : Rahul

Roll No : 103
Name    : Amit

=======================================
*/
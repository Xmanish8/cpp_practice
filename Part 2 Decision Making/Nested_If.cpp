/*
===========================================
          Nested if Statement
===========================================

Theory:
--------
A Nested if is an if statement placed inside another
if statement.

===========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int age;
    bool hasLicense;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Do you have Driving License? (1 = Yes, 0 = No): ";
    cin >> hasLicense;

    if (age >= 18)
    {
        if (hasLicense)
        {
            cout << "You are eligible to drive.";
        }
        else
        {
            cout << "You need a valid driving license.";
        }
    }
    else
    {
        cout << "You are underage.";
    }

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Enter Age: 20
Do you have Driving License? (1 = Yes, 0 = No): 1

You are eligible to drive.

=======================================
*/

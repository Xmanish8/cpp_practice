/*
===========================================
      Function Declaration in C++
===========================================

Theory:
--------
A function declaration (prototype) informs the
compiler about the function's name, return type,
and parameters before it is used.

Syntax:
return_type function_name(parameters);

===========================================
*/

#include <iostream>
using namespace std;

// Function Declaration
void displayMessage();

int main()
{
    displayMessage();

    return 0;
}

// Function Definition
void displayMessage()
{
    cout << "Function Declaration Example";
}

/*
============ SAMPLE OUTPUT ============

Function Declaration Example

=======================================
*/
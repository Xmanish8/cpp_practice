/*
===========================================
          Function Basics in C++
===========================================

Theory:
--------
A function is a block of code that performs a
specific task. Functions improve code reusability,
readability, and modularity.

Syntax:
return_type function_name(parameters)
{
    // function body
}

===========================================
*/

#include <iostream>
using namespace std;

// Function Definition
void greet()
{
    cout << "Welcome to C++ Programming!";
}

int main()
{
    greet();

    return 0;
}

/*
============ SAMPLE OUTPUT ============

Welcome to C++ Programming!

=======================================
*/
// Standard library header files
#include <iostream>

// To make std::cout and std::cin -> cout and cin
using namespace std;

// Entry point for program takes no arguments (void)
int main (void)
{
    // Initialize variables with no value ( .bss section? )
    double n1, n2;

    // Get user inputs and put them into the reserved memory space for n1 and n2
    cout << "Enter a number: ";
    cin >> n1;
    cout << "Enter another number: ";
    cin >> n2;

    // Output the sum of the two inputted numbers
    cout << n1 + n2;
}

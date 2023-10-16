#include <iostream>
#include <cstdlib>

using namespace std;

/*
Notes:
    This program is more of a C-like implementation than a C++ one.
    Consider using std::vector from the standard library.
*/

// Function to store even numbers up to limit (exclusive) in an allocated array
int *even_numbers (int limit)
{
    // Allocate memory for limit / 2 integers
    int *numbers = (int*) malloc(limit / 2 * sizeof(int));

    int index = 0;
    for (int i = 0; i < limit; i++)
    {
        if (i % 2 == 0) numbers[index++] = i;
    }

    // Return pointer to array
    return numbers;
}

int main (void)
{
    int *numbers;
    int n;

    cout << "Enter limit: ";
    cin >> n;
    numbers = even_numbers(n);
    cout << "The even numbers up to " << n << " (exclusive) are ";
    for (int i = 0; i < n / 2; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Free allocated memory
    free(numbers);
    return 0;
}

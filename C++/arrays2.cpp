#include <iostream>
#include <vector>

using namespace std;

/*
Notes:
    This program follows modern C++ standards better than ./arrays.cpp
*/

vector<int> even_numbers (int n)
{
    vector<int> numbers;

    for (int i = 0; i < n; i++) if (i % 2 == 0) numbers.push_back(i);

    return numbers;
}

int main (void)
{
    vector<int> numbers;
    int n;

    cout << "Enter limit: ";
    cin >> n;

    numbers = even_numbers(n);
    for (int number : numbers) cout << number << " ";
    cout << endl;

    return 0;
}

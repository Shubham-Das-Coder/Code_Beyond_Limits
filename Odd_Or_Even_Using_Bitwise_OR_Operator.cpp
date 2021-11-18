// C++ program to check for even or odd
// using Bitwise OR operator

#include <iostream>
using namespace std;

// Returns true if n is even, else odd
bool isEven(int n)
{

    // n|1 is greater than n, then even, else odd
    if ((n | 1) > n)
        return true;
    else
        return false;
}

// Driver code
int main()
{
    int n;
    cin >> n;
    isEven(n)
        ? cout << "Even"
        : cout << "Odd";

    return 0;
}

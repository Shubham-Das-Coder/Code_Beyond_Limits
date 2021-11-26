// CPP program to count occurrences of
// a character using library
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main()
{
    string str;
    char c;
    cout << "Please enter the string" << endl;
    cin >> str;
    cout << "Please enter the letter you want to check" << endl;
    cin >> c;

    // Count returns number of occurrences of
    // c between two given positions provided
    // as two iterators.
    cout << count(str.begin(), str.end(), c);
    return 0;
}

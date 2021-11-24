#include <bits/stdc++.h>
using namespace std;

// unsets the rightmost set bit of n and returns the result
int fun(unsigned int n)
{
    return n & (n - 1);
}

// Driver Code
int main()
{
    int n;
    cout << "Enter value of n\n";
    cin >> n;
    cout << "The number after unsetting the";
    cout << " rightmost set bit is " << fun(n);
    return 0;
}
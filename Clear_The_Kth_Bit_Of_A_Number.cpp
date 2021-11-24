// C++ program to clear K-th bit of a number N

#include <bits/stdc++.h>
using namespace std;

// Function to clear the kth bit of n
int clearBit(int n, int k)
{
    return (n & (~(1 << (k - 1))));
}

// Driver code
int main()
{
    int n, k;
    cout << "Enter value of n\n";
    cin >> n;
    cout << "Enter value of k\n";
    cin >> k;
    cout << clearBit(n, k) << endl;

    return 0;
}
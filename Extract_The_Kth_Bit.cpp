// CPP program to find k-th bit from right
#include <bits/stdc++.h>
using namespace std;

void printKthBit(unsigned int n, unsigned int k)
{
    cout << ((n & (1 << (k - 1))) >> (k - 1));
}

// Driver Code
int main()
{
    unsigned int n, k;
    cout << "Enter value of n\n";
    cin >> n;
    cout << "Enter value of k\n";
    cin >> k;
    // Function Call
    printKthBit(n, k);
    return 0;
}

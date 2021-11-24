#include <bits/stdc++.h>
using namespace std;

void isKthBitSet(int n, int k)
{
    if ((n >> (k - 1)) & 1)
        cout << "SET";
    else
        cout << "NOT SET";
}

// Driver code
int main()
{
    int n, k;
    cout << "Enter value of n\n";
    cin >> n;
    cout << "Enter value of k\n";
    cin >> k;
    isKthBitSet(n, k);
    return 0;
}

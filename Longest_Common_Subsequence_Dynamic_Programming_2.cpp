#include <bits/stdc++.h>
using namespace std;
int lcs(int i, int j, string s1, string s2)
{
    // Base case
    if (i < 0 || j < 0)
    {
        return 0;
    }
    if (s1[i] == s2[j])
    {
        return 1 + lcs(i - 1, j - 1, s1, s2);
    }
    else // If both are not same
    {
        int left = lcs(i - 1, j, s1, s2);
        int right = lcs(i, j - 1, s1, s2);
        return max(left, right);
    }
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();
    cout << lcs(n - 1, m - 1, s1, s2);
}
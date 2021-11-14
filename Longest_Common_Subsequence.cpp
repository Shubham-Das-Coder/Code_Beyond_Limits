#include <bits/stdc++.h>
using namespace std;
int lcs(int i, int j, string s1, string s2)
{
    // Base case
    if (i >= s1.size() || j >= s2.size())
    {
        return 0;
    }
    if (s1[i] == s2[j])
    {
        return 1 + lcs(i + 1, j + 1, s1, s2);
    }
    else
    {
        // If both are not same
        int left = lcs(i + 1, j, s1, s2);
        int right = lcs(i, j + 1, s1, s2);
        return max(left, right);
    }
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << lcs(0, 0, s1, s2);
}
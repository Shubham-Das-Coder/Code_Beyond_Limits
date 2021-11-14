#include <bits/stdc++.h>
using namespace std;
int editDist(int i, int j, string s1, string s2)
{
    if (i < 0)
        return i + 1;
    if (j < 0)
        return j + 1;
    if (s1[i] == s2[j])
    {
        return editDist(i - 1, j - 1, s1, s2);
    }
    else // If both are not same
    {
        int left = 1 + editDist(i, j - 1, s1, s2);      // Insert
        int mid = 1 + editDist(i - 1, j, s1, s2);       // Remove
        int right = 1 + editDist(i - 1, j - 1, s1, s2); // Replace
        return min(left, min(mid, right));
    }
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();
    cout << editDist(n - 1, m - 1, s1, s2);
}
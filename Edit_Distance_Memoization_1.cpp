#include <bits/stdc++.h>
using namespace std;
int editDist(int i, int j, string s1, string s2, vector<vector<int>> &dp)
{
    if (i == s1.size())
        return s2.size() - j;
    if (j == s2.size())
        return s1.size() - i;
    if (s1[i] == s2[j])
    {
        return dp[i][j] = editDist(i + 1, j + 1, s1, s2, dp);
    }
    else // If both are not same
    {
        int left = 1 + editDist(i, j + 1, s1, s2, dp);      // Insert
        int mid = 1 + editDist(i + 1, j, s1, s2, dp);       // Remove
        int right = 1 + editDist(i + 1, j + 1, s1, s2, dp); // Replace
    }
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();
    vector<vector<int>> dp(n, vector<int>(m, -1));
    cout << editDist(0, 0, s1, s2, dp);
}
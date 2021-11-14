#include <bits/stdc++.h>
using namespace std;
int editDist(int i, int j, string s1, string s2, vector<vector<int>> &dp)
{
    if (i < 0)
        return j + 1;
    if (j < 0)
        return i + 1;
    if (s1[i] == s2[j])
    {
        return dp[i][j] = editDist(i - 1, j - 1, s1, s2, dp);
    }
    else // If both are not same
    {
        int left = 1 + editDist(i, j - 1, s1, s2, dp);
        int mid = 1 + editDist(i - 1, j, s1, s2, dp);
        int right = 1 + editDist(i - 1, j - 1, s1, s2, dp);
        return dp[i][j] = min(left, min(mid, right));
    }
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();
    vector<vector<int>> dp(n, vector<int>(m, -1));
    cout << editDist(n - 1, m - 1, s1, s2, dp);
}
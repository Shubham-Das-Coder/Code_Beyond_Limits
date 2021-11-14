#include <bits/stdc++.h>
using namespace std;
int lcs(int i, int j, string s1, string s2, vector<vector<int>> &dp)
{
    // Base case
    if (i >= s1.size() || j >= s2.size())
    {
        return 0;
    }
    // If the state has been visited previously
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    if (s1[i] == s2[j]) // If characters match
    {
        return 1 + lcs(i + 1, j + 1, s1, s2, dp);
    }
    else // If both are not same
    {
        int left = lcs(i + 1, j, s1, s2, dp);
        int right = lcs(i, j + 1, s1, s2, dp);
        return dp[i][j] = max(left, right);
    }
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();
    // Initialize a 2-D vector with -1 at every index i,j
    vector<vector<int>> dp(n, vector<int>(m, -1));
    cout << lcs(0, 0, s1, s2, dp);
}
#include <bits/stdc++.h>
using namespace std;
int minCostPath(int i, int j, vector<vector<int>> &mat)
{
    int n = mat.size();
    int m = mat[0].size();
    if (i == (n - 1) && j == (m - 1))
        return mat[i][j];
    if (i >= n || j >= m)
        return 100;
    int right = mat[i][j] + minCostPath(i, j + 1, mat);
    int left = mat[i][j] + minCostPath(i + 1, j, mat);
    return min(left, right);
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    cout << minCostPath(0, 0, mat);
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, wt;
ll wtarr[100005], val[100005];
ll dp[105][100004];
ll func(int ind, int weight)
{
    if (weight > wt)
        return -1e18;
    if (ind == n)
        return 0;
    if (dp[ind][weight] != -1)
        return dp[ind][weight];
    ll steal = val[ind] + func(ind + 1, weight + wtarr[ind]);
    ll nonsteal = func(ind + 1, weight);
    return dp[ind][weight] = max(steal, nonsteal);
}
int main()
{
    cin >> n >> wt;
    for (int i = 0; i < n; i++)
    {
        cin >> wtarr[i] >> val[i];
    }
    memset(dp, -1, sizeof dp);
    cout << func(0, 0);
    return 0;
}
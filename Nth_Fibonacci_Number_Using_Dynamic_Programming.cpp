#include<bits/stdc++.h>
using namespace std;
int fibo(int n,vector<int>&dp)
{
    if(n<=1) return n;
    
    //If previously the state
    //Has been visited or not
    if(dp[n]!=-1) return dp[n];

    //Memorize the answer
    dp[n]=fibo(n-1,dp)+fibo(n-2,dp);

    //Return the answer
    return dp[n];
}

int main()
{
    int n;
    cin>>n;
    
    //Initially mark everyone as -1
    //Which means none of them has been visited
    vector<int>dp(n+1,-1);

    int ans=fibo(n,dp);
    cout<<ans;
}
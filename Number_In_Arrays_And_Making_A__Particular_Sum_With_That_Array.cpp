#include <bits/stdc++.h>
using namespace std;
int ind,sum,arr[],n;
int countF(int ind,int sum,int arr[],int n)
{
    if(ind==n)
    {
        if(sum==0)
        {
            return 1;
        }
        return 0;
    }
    int left=0;
    int right=0;
    //When can you pick a particular index
    if(arr[ind]<=sum)
    {
        sum-=arr[ind];
        left=countF(ind,sum,arr,n);
        sum+=arr[ind];
    }
    //Non-pick means move to the next index
    right=countF(ind+1,sum,arr,n);
    return left+right;
}
int main()
{

}
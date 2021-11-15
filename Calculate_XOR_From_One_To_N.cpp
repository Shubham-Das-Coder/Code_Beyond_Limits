#include <bits/stdc++.h>
using namespace std;
int main()
{
    int XOR = 0;
    int N;
    cout << "Please enter a number\n";
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        XOR = XOR ^ i;
    }
    cout << XOR;
}
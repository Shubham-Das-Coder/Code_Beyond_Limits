// C++ program to find XOR without using ^
#include <iostream>
using namespace std;

int XOR(int x, int y) { return (x + y - (2 * (x & y))); }

int main()
{
    int x, y;
    cout << "Please enter two numbers\n";
    cin >> x >> y;
    cout << XOR(x, y) << endl;
    return 0;
}
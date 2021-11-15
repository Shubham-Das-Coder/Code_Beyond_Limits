#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Please enter two numbers\n";
    cin >> x >> y;
    cout << "Before swapping x = " << x << " and y = " << y << ".\n";

    // swapping using bitwise operator
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    cout << "After swapping x = " << x << " and y = " << y << ".\n";

    return 0;
}
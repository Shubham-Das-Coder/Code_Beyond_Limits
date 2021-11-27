#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    cout << "Before swapping " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    c = a;
    a = b;
    b = c;
    cout << "After swapping " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
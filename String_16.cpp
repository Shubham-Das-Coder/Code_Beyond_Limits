#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1 = "ShubhamDas";
    s1.erase(3, 2);
    s1.erase(4, 2);
    cout << s1 << endl;
    return 0;
}
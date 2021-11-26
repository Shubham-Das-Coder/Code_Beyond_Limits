#include <iostream>
#include <string>
using namespace std;

// Function that return count of the given character in the string
int count(string s, char c)
{
    // Count variable
    int res = 0;

    for (int i = 0; i < s.length(); i++)

        // checking character in string
        if (s[i] == c)
            res++;

    return res;
}

// Driver code
int main()
{
    string str;
    char c;
    cout << "Please enter the string" << endl;
    cin >> str;
    cout << "Please enter the letter you want to check" << endl;
    cin >> c;
    cout << count(str, c) << endl;
    return 0;
}

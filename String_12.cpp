/*
Time complexity of clear() function is big O(n+m)
where n is the size of the first string and m is the size of the second string
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1 = "abc";
    string s2 = "xyz";
    string s3 = "abc";
    cout << s1.compare(s2) << endl;
    cout << s1.compare(s3) << endl;
    cout << s2.compare(s1) << endl;
    return 0;
}
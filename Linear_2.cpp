#include <iostream>
using namespace std;
int main()
{
    int key, n;
    cout << "Enter the legth of the array : " << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element you want to search : " << endl;
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Found at : " << i << endl;
        }
    }
    return 0;
}
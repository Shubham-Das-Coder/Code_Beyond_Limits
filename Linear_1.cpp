#include <iostream>
using namespace std;
int main()
{
    int key = 25;
    int arr[] = {13, 25, 12, 5, 25};
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            cout << "Found at : " << i << endl;
        }
    }
    return 0;
}
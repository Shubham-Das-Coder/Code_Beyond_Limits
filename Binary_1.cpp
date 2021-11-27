#include <iostream>
using namespace std;
int binarySearch(int arr[], int s, int e, int key)
{
    if (e >= s)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            return binarySearch(arr, s, mid - 1, key);
        }
        else
        {
            return binarySearch(arr, mid + 1, e, key);
        }
    }
    return -1;
}
int main()
{
    int arr[] = {56, 62, 76, 88, 99, 105};
    int key = 105;
    int n = 6;
    int result = binarySearch(arr, 0, n - 1, key);
    cout << result + 1;
    return 0;
}

// C++ program to find XOR without using ^
#include <iostream>
using namespace std;
 
// Returns XOR of x and y
int myXOR(int x, int y)
{
   return (x | y) & (~x | ~y);
}
 
// Driver program to test above function
int main()
{
   int x, y;
    cout << "Please enter two numbers\n";
    cin >> x >> y;
   cout << "XOR is " << myXOR(x, y);
   return 0;
}
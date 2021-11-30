/*  Sample Output 👇
          1 
        1 2 1 
      1 2 3 2 1 
    1 2 3 4 3 2 1
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter size: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
            cout << "  ";
        for (int j = 1; j <= i; j++)
            cout << j << " ";
        for (int j = 1; j < i; j++)
            cout << i - j << " ";
        cout << endl;
    }
}
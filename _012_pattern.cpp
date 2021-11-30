/*  Sample Output 👇
    A B C 
    D E F 
    G H I 
*/
#include <iostream>
using namespace std;
int main()
{
    // Method = 1;
    // int n, count = 1;
    // cout << "Enter size: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         char c = 'A' + count++ - 1;
    //         cout << c << " ";
    //     }
    //     cout << endl;
    // }
    // Method = 2;
    int n;
    char value = 'A';
    cout << "Enter size: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << value++ << " ";
        cout << endl;
    }
}
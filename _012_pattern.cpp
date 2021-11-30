/*  Sample Output 👇
    A B C 
    D E F 
    G H I 
*/
#include <iostream>
using namespace std;
int main()
{
    int n, count;
    cout << "Enter size: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        count = 1;
        for (int j = 1; j <= n; j++)
        {
            char c = 'A' + count++ - 1;
            cout << c << " ";
        }
        cout << endl;
    }
}
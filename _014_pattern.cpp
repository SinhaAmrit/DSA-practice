/*  Sample Output 👇
    A * * 
    B C *  
    C D E 
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
        }
        for (int j = n - i; j >= 1; j--)
            cout << "* ";
        cout << endl;
    }
}
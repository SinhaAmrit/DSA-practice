/*  Sample Output 👇
    1 2 3 4 
    5 6 7 8 
    9 10 11 12
*/
#include <iostream>
using namespace std;
int main()
{
    int n, count = 1;
    cout << "Enter size: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << count++ << " ";
        cout << endl;
    }
}
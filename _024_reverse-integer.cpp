#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans = 0;
    cout << "Enter an integer: " << ends;
    cin >> n;
    while (n != 0)
    {
        int digit = n % 10;
        if ((ans > INT_MAX / 10) || (ans * 10 < INT_MIN))
        {
            cout << "Invalid range :-(";
            return 0;
        }
        ans = (ans * 10) + digit;
        n /= 10;
    }
    cout << "Reverse is " << ans;
}
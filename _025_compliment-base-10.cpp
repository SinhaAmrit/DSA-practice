#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, mask = 0;
    cout << "Enter a binary representation: " << ends;
    cin >> n;
    m = n;
    if (n == 0)
    {
        cout << "Compliment base 10 of " << n << " is " << 1 << endl;
        return 0;
    }
    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;
    cout << "Compliment base 10 of " << n << " is " << ans << endl;
}
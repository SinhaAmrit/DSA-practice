#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool isPowerOfTwo = false;
    cout << "Enter an integer to check: " << ends;
    cin >> n;
    for (int i = 0; i < 30; i++)
        if (pow(2, i) == n)
            isPowerOfTwo = true;
    if (isPowerOfTwo)
        cout << n << " is in power of Two" << endl;
    else
        cout << n << " is not in power of Two" << endl;
}
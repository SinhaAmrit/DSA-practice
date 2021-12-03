#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool isPowerOfTwo = false;
    // int n;
    // cout << "Enter an integer to check: " << ends;
    // cin >> n;
    // for (int i = 0; i < 30; i++)
    //     if (pow(2, i) == n)
    //         isPowerOfTwo = true;
    //optimised Solution Starts
    int n, ans = 1;
    cout << "Enter an integer to check: " << ends;
    cin >> n;
    for (int i = 0; i <= 30; i++)
        if (ans == n)
            isPowerOfTwo = true;
        else if (ans < INT_MAX / 2 || ans * 2 > INT_MAX)
            ans *= 2;
    //optimised Solution Ends
    if (isPowerOfTwo)
        cout << n << " is in power of Two" << endl;
    else
        cout << n << " is not in power of Two" << endl;
}
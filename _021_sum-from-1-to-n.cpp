#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "[*] Upto where you have to perform summation: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
        sum += i;
    cout << "Sum of numbers from 1 to " << n << " is " << sum << endl;
}
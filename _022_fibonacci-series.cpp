#include <iostream>
using namespace std;
int main()
{
    int n, firstNumber = 0, secondNumber = 1, nextNumber;
    cout << "[*] Enter the term for \"Fibonacci Series\": ";
    cin >> n;
    cout << "> " << firstNumber << " " << secondNumber << " ";
    for (int i = 1; i < n - 1; i++)
    {
        nextNumber = firstNumber + secondNumber;
        cout << nextNumber << " ";
        firstNumber = secondNumber;
        secondNumber = nextNumber;
    }
}
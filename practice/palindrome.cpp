#include <iostream>
using namespace std;

void palindrome(int n)
{
    int temp = n, sum = 0;
    while (temp > 0)
    {
        int digit = temp % 10;
        sum = sum * 10 + digit;
        temp /= 10;
    }
    if (n == sum)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}

int main()
{
    int n;
    cin >> n;
    palindrome(n);
    return 0;
}
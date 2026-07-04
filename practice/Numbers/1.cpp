#include <iostream>

using namespace std;

bool palindrome(int n)
{
    if (n < 0)
        return false;
    int original = n, rev = 0;
    while (n > 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    if (rev == original)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    cout << palindrome(n);
    return 0;
}
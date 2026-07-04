#include <iostream>
#include <vector>

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

void range(int a, int b)
{
    int i = a, j = b;
    while (i <= j)
    {
        if (palindrome(i))
        {
            cout << i << " ";
        }
        i++;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    range(a, b);
    return 0;
}
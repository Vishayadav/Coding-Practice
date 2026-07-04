#include <iostream>

using namespace std;

bool Armstrong(int n)
{
    if (n < 0)
        return false;
    int org = n, newNum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        newNum = newNum + digit * digit * digit;
        n /= 10;
    }
    if (org == newNum)
        return true;
    return false;
}

void range(int a, int b)
{
    int i = a, j = b;
    while (i <= j)
    {
        if (Armstrong(i))
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
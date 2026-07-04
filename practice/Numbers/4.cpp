#include <iostream>
#include <math.h>

using namespace std;

bool prime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void range(int a, int b)
{
    int i = a, j = b;
    while (i <= j)
    {
        if (prime(i))
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
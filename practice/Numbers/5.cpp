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
    int i = a, j = b, sum = 0;
    while (i <= j)
    {
        if (prime(i))
        {
            sum += i;
        }
        i++;
    }
    cout << sum;
}

int main()
{
    int a, b;
    cin >> a >> b;
    range(a, b);
    return 0;
}
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

void helper(int a, int b)
{
    int i = a, j = b;
    int sum = 0;
    while (i <= j)
    {
        if (prime(i))
        {
            cout << i;
            sum += i;
        }
        i++;
    }
    cout << endl
         << sum;
}

int main()
{
    int a, b;
    cin >> a >> b;
    helper(a, b);
    return 0;
}
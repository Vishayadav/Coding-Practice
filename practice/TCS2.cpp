// 2 3 5 7 11 13 17 19 23...
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
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
int sum(int a, int b)
{
    int count = 0, add = 0, num = 2;
    while (count <= b)
    {
        if (isPrime(num))
        {
            count++;
            if (count >= a && count <= b)
            {
                add += num;
            }
        }
        num++;
    }
    return add;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << sum(a, b);
    return 0;
}
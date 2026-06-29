#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int prime(int a, int b)
{
    int sum = 0, num = a + 1;
    while (num > a && num < b)
    {
        if (isPrime(num))
        {
            sum += num;
        }
        num++;
    }
    return sum;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << prime(a, b);
    return 0;
}
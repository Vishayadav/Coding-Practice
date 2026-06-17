// 1 2 1 3 2 5 3 7....
#include <iostream>
#include <cmath>
using namespace std;
int index;
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
int prime(int index)
{
    int count = 0;
    int num = 2;
    while (count < index)
    {
        if (isPrime(num))
        {
            count++;
            if (count == index)
            {
                return num;
            }
        }
        num++;
    }
}
int fib(int index)
{
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if (n % 2 == 1)
    {
        // fib here
        index = (n + 1) / 2;
        cout << fib(index);
    }
    else
    {
        // prime here
        index = n / 2;
        cout << prime(index);
    }
    return 0;
}
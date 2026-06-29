#include <iostream>
#include <cmath>

using namespace std;

bool prime(int num)
{
    if (num < 2)
        return false;
    else
    {
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
                return false;
        }
    }
    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int num = a + 1;
    while (num < b)
    {
        if (prime(num) == true)
        {
            cout << num << " ";
        }
        num++;
    }
    return 0;
}
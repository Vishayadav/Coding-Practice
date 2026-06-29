#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void prime(int n)
{
    if (n < 2)
        cout << 0.00;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            cout << 0.00;
    }
    cout << fixed << setprecision(2) << sqrt(n);
}

int main()
{
    int n;
    cin >> n;
    prime(n);
    return 0;
}
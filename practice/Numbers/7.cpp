#include <iostream>

using namespace std;

bool perfect(int n)
{
    int currSum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            currSum += i;
        }
    }
    return currSum == n;
}

void range(int a, int b)
{
    int i = a, j = b, sum = 0, product = 1;
    while (i <= j)
    {
        if (perfect(i))
        {
            cout << i << " ";
            sum += i;
            product *= i;
        }
        i++;
    }
    cout << "\nSum : " << sum << "\nProduct : " << product;
}

int main()
{
    int a, b;
    cin >> a >> b;
    range(a, b);
    return 0;
}
#include <iostream>

using namespace std;

void Armstrong(int n)
{
    if (n < 0)
    {
        cout << "No";
        return;
    }
    int org = n, newNum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        newNum = newNum + (digit * digit * digit);
        n /= 10;
    }
    org == newNum ? cout << "Yes" : cout << "No";
}

int main()
{
    int n;
    cin >> n;
    Armstrong(n);
    return 0;
}
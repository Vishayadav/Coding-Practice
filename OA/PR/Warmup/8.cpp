#include <iostream>

using namespace std;

void helper(int n)
{
    int org = n, newNum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        newNum += (digit * digit * digit);
        n /= 10;
    }
    newNum == org ? cout << "Yes" : cout << "No";
}

int main()
{
    int n;
    cin >> n;
    helper(n);
    return 0;
}
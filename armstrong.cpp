// A number is said to be an armstring number if the sum of cubes of each digit is equal to the original number itself.

#include <iostream>
using namespace std;

void arm(int n)
{
    int temp = n;
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum = sum + (digit * digit * digit);
        n /= 10;
    }
    if (sum == temp)
        cout << "Yes";
    else
        cout << "No";
}

int main()
{
    int n;
    cin >> n;
    arm(n);
    return 0;
}
/* A number is said to be a strong number if the sum of its factorial is equal to the number itself
for eg: 2! = 2 therefore 2 is a strong number
145 = 1! + 4! + 5!
i.e. 1 + 24 + 120
therefore 145 is a strong number */
#include <iostream>
using namespace std;

int fact(int num)
{
    if (num == 0 || num == 1)
        return 1;
    return num * fact(num - 1);
}

int strong(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum += fact(digit);
        n /= 10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    if (n == strong(n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
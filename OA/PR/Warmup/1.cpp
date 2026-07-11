// Even or odd
#include <iostream>

using namespace std;

void check(int n)
{
    if (n % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";
}

int main()
{
    int n;
    cin >> n;
    check(n);
    return 0;
}
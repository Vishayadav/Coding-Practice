#include <iostream>
#include <cmath>
using namespace std;

int ps(int n)
{
    if (sqrt(n) == int(sqrt(n)))
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    int n;
    cin >> n;
    ps(n);
    return 0;
}
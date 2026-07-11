#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int maxi = INT_MIN;
    if (a > maxi)
        maxi = a;
    if (b > maxi)
        maxi = b;
    if (c > maxi)
        maxi = c;

    cout << maxi;
    return 0;
}
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mx = max(mx, x);
    }
    cout << x;
    return 0;
}

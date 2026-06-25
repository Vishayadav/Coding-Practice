#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int product = 1, maxi1 = INT_MIN, maxi2 = INT_MIN, maxiFin;
    for (int i = 0; i < n; i++)
    {
        product *= v[i];
        if (product == 0)
            product = 1;
        maxi1 = max(maxi1, product);
    }
    product = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        product *= v[i];
        if (product == 0)
            product = 1;
        maxi2 = max(maxi2, product);
    }
    maxiFin = max(maxi1, maxi2);
    cout << maxiFin;
    return 0;
}
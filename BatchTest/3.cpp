#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int maxi = INT_MIN, maxi2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > maxi)
        {
            maxi2 = maxi;
            maxi = v[i];
        }
        if (v[i] < maxi && v[i] > maxi2)
        {
            maxi2 = v[i];
        }
    }
    if (maxi2 == INT_MIN)
        cout << -1;
    else
        cout << maxi2;
    return 0;
}
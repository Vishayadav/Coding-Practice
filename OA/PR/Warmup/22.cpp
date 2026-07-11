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
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    int ans = 1, maxi = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (v[i] != v[i - 1])
        {
            ans = 1;
        }
        else
        {
            ans++;
        }
        maxi = max(maxi, ans);
    }
    cout << maxi;
    return 0;
}
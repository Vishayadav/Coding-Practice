#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int maxi = INT_MIN;
    for (int i = 0; i < v.size() - 1; i++)
    {
        maxi = max(maxi, v[i + 1] - v[i]);
    }
    cout << maxi;
    return 0;
}
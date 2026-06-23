// Assuming that a sorted array is given as an input
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main()
{
    // Input
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    // Processing
    unordered_map<int, int> mp;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(v[i]) != mp.end())
        {
            mp[v[i]]++;
            continue;
        }
        else
        {
            mp[v[i]] = 1;
            ans.push_back(v[i]);
        }
    }

    // Output
    for (int i : ans)
        cout << i << " ";

    return 0;
}
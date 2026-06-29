#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(v[i]) != mp.end())
            mp[v[i]]++;
        else
            mp[v[i]] = 1;
    }
    vector<pair<int, int>> vi;
    for (int i = 0; i < n; i++)
    {
        vi.push_back({v[i], mp[v[i]]});
    }
    auto cmp = [](pair<int, int> a, pair<int, int> b)
    {
        if (a.second != b.second)
            return a.second < b.second;
        return a.first < b.first;
    };
    sort(vi.begin(), vi.end(), cmp);
    for (int i = 0; i < n; i++)
        cout << vi[i].first << " ";
    return 0;
}
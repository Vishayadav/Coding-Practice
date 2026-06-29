#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<int> vi(v);
    sort(vi.begin(), vi.end());
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(vi[i]) == mp.end())
            mp[vi[i]] = i + 1;
    }

    for (int i = 0; i < n; i++)
        cout << mp[v[i]] << " ";
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> res;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    unordered_map<int, int> mp;
    for (int i : v)
    {
        if (mp.find(i) == mp.end())
        {
            mp[i]++;
            res.push_back(i);
        }
    }
    for (int i : res)
        cout << i << " ";
    return 0;
}
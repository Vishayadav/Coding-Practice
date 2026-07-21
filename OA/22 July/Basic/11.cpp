#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    // sort(mp.begin(), mp.end());
    for (auto i : mp)
        cout << i.first << " " << i.second << endl;
    return 0;
}
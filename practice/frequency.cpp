#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// int frequency()
// {
// }

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (mp.find(v[i]) != mp.end())
        {
            mp[v[i]]++;
        }
        else
        {
            mp[v[i]] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << mp[v[i]] << " ";
    }
    return 0;
}
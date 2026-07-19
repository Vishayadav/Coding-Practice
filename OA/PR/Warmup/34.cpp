#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    unordered_map<string, vector<string>> mp;
    for (int i = 0; i < n; i++)
    {
        string str = v[i];
        sort(str.begin(), str.end());
        mp[str].push_back(v[i]);
    }

    for (auto i : mp)
    {
        for (int j = 0; j < i.second.size(); j++)
        {
            cout << i.second[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
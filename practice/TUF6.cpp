#include <iostream>
#include <vector>
#include <utility>
#include <unordered_map>

using namespace std;

class solution
{
public:
    vector<pair<int, int>> ans;
    vector<pair<int, int>> helper(vector<pair<int, int>> v)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < v.size(); i++)
        {
            if (mp.find(v[i].second) != mp.end())
            {
                if (mp[v[i].second] == v[i].first)
                {
                    ans.push_back({v[i].second, v[i].first});
                    ans.push_back({v[i].first, v[i].second});
                }
            }
            else
            {
                mp[v[i].first] = v[i].second;
            }
        }
        return ans;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    solution obj;
    obj.ans = obj.helper(v);
    for (auto i : obj.ans)
        cout << i.first << " " << i.second << endl;

    return 0;
}
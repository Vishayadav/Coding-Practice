#include <iostream>
#include <vector>
#include <utility>
#include <unordered_map>
#include <algorithm>

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
                    ans.push_back({v[i].first, v[i].second});
                    ans.push_back({v[i].second, v[i].first});
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
    vector<pair<int, int>> v = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};
    solution obj;
    obj.ans = obj.helper(v);
    for (auto i : obj.ans)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}
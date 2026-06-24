#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class solution
{
public:
    vector<int> ans;
    vector<int> isRepeating(vector<int> &v, int n)
    {
        sort(v.begin(), v.end());
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            if (mp.find(v[i]) != mp.end())
            {
                mp[v[i]]++;
            }
            else
            {
                mp[v[i]] = 1;
            }
        }
        for (auto it : mp)
        {
            if (it.second == 1)
                ans.push_back(it.first);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    solution obj;
    obj.isRepeating(v, n);
    for (int i : obj.ans)
        cout << i << " ";
    return 0;
}
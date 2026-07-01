#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>

using namespace std;

vector<vector<int>> sub(vector<int> v, int k)
{
    int n = v.size();
    if (k > n)
        return {};
    int i = 0, j = k - 1;
    vector<int> res;
    vector<vector<int>> resi;
    while (j < n)
    {
        res.clear();
        int sum = 0;
        int temp = i;
        while (i <= j)
        {
            sum += v[i];
            res.push_back(v[i]);
            i++;
        }
        if (sum % 2 == 0)
            sort(res.begin(), res.end());
        else
            reverse(res.begin(), res.end());
        resi.push_back(res);
        i = temp;
        i++;
        j++;
    }
    return resi;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int k;
    cin >> k;
    unordered_map<int, int> mp;
    vector<vector<int>> ans = sub(v, k);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            if (mp.find(ans[i][j]) == mp.end())
            {
                cout << ans[i][j] << " ";
                mp[ans[i][j]] = 1;
            }
        }
    }
    return 0;
}
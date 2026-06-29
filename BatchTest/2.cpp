#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<int> v(n);
    vector<int> ans;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    if (n < 2)
    {
        cout << -1;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (v[i] > v[i + 1])
                ans.push_back(v[i]);
        }
        else if (i == n - 1)
        {
            if (v[i] > v[i - 1])
                ans.push_back(v[i]);
        }
        else
        {
            if (v[i] > v[i - 1] && v[i] > v[i + 1])
                ans.push_back(v[i]);
        }
    }
    if (ans.size() == 0)
        cout << -1;
    else
    {
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
    }
    return 0;
}
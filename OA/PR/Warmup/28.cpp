#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

class solution
{
public:
    int target, ans;
    void dfs(vector<int> &top, int idx, int cost)
    {
        if ((abs(cost - target) < abs(ans - target)) || ((abs(cost - target) == abs(ans - target)) && (cost < ans)))
            ans = cost;
        if (idx == top.size())
            return;
        dfs(top, idx + 1, cost);                  // Skip - 0 toppings
        dfs(top, idx + 1, cost + top[idx]);       // 1toppings
        dfs(top, idx + 1, cost + (2 * top[idx])); // 2 toppings
    }
};

int main()
{
    int n;
    solution obj;
    cin >> n;
    vector<int> base(n);
    for (int i = 0; i < n; i++)
        cin >> base[i];
    int m;
    cin >> m;
    vector<int> toppings(m);
    for (int i = 0; i < m; i++)
        cin >> toppings[i];
    obj.target;
    cin >> obj.target;
    obj.ans = INT_MAX;
    for (int b : base)
        obj.dfs(toppings, 0, b);
    cout << obj.ans;
    return 0;
}
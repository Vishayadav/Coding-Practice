#include <iostream>
#include <vector>
#include <queue>

using namespace std;
// 2 -3 4 5 7
vector<int> helper(vector<int> &v, int k)
{
    queue<int> q;
    vector<int> res;
    for (int i = 0; i < k; i++)
    {
        if (v[i] < 0)
            q.push(i);
    }

    for (int i = k; i < v.size(); i++)
    {
        if (q.empty())
            res.push_back(0);
        else
            res.push_back(v[q.front()]); // Stpring the answer for the previous window.
        if (!q.empty() && q.front() <= i - k)
            q.pop(); // Remove the outgoing element
        if (v[i] < 0)
            q.push(i); // Push incoming element
    }
    if (q.empty())
        res.push_back(0);
    else
        res.push_back(v[q.front()]);
    return res;
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
    vector<int> ans = helper(v, k);
    for (int i : ans)
        cout << i << " ";
    return 0;
}
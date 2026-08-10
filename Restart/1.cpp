#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n), w(m);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < m; i++)
        cin >> w[i];
    vector<int> res;
    int i = 0, j = 0;
    while (i < v.size() && j < w.size())
    {
        if (v[i] == 0)
        {

            res.push_back(w[j]);
            j++;
            continue;
                }
        if (v[i] <= w[j])
        {
            res.push_back(v[i]);
            i++;
        }
        else
        {
            res.push_back(w[j]);
            j++;
        }
    }
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getAns(vector<int> v, int k)
{
    vector<int> res;
    for (int i = 0; i <= 1000; i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            if (i % v[j] == 0)
                res.push_back(i);
        }
    }
    sort(res.begin(), res.end());
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    return res[k + 1];
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
    cout << getAns(v, k);
    return 0;
}
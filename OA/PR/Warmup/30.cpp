#include <iostream>
#include <vector>

using namespace std;

vector<int> helper(vector<int> &v, int k)
{
    int i = 0, j = k - 1, n = v.size();
    vector<int> res;
    while (j < n)
    {
        int temp = i;
        int flag = 0;
        while (i <= j)
        {
            if (v[i] < 0)
            {
                flag = 1;
                res.push_back(v[i]);
                break;
            }
            i++;
        }
        if (flag == 0)
            res.push_back(0);
        i = temp + 1;
        j++;
    }
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
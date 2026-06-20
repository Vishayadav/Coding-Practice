#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> twoSum(int a[], int n, int target)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int needed = target - a[i];
        if (mp.find(needed) != mp.end())
        {
            return {mp[needed], i};
        }
        else
        {
            mp[a[i]] = i;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int target;
    cin >> target;
    vector<int> ans = twoSum(a, n, target);
    cout << ans[0] << " " << ans[1];
    return 0;
}
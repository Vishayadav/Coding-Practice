#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &p)
    {
        // code here
        int maxProfit = 0, currMini = INT_MAX, profit, ans = 0;
        for (int i = 0; i < p.size(); i++)
        {
            if (p[i] < currMini || p[i] < p[i - 1])
            {
                // New buy
                ans += maxProfit;
                maxProfit = 0;
                currMini = p[i];
            }
            // Calculate profit:
            profit = p[i] - currMini;
            maxProfit = max(maxProfit, profit);
        }
        ans += maxProfit;
        return ans;
    }
};

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    Solution s;
    cout << s.maxProfit(p);
    return 0;
}
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
        int maxProfit = INT_MIN, currMini = INT_MAX, profit, ans = 0;
        for (int i = 0; i < p.size(); i++)
        {
            if (p[i] < currMini || p[i] < p[i - 1])
            {
                // New buy
                if (maxProfit == INT_MIN)
                {
                    cout << "Entered maxProfit = INT_MIN, made ans =0 (Intitial Buy)" << endl;
                    ans = 0;
                }
                else
                {
                    cout << "Enetered new buy , p[i] < currMini and maxProfit != INT_MIN" << endl;
                    cout << "Ans: " << ans << "MaxProfit: " << endl;
                    ans += maxProfit;
                    maxProfit = 0;
                }
                currMini = p[i];
            }
            // Calculate profit:
            profit = p[i] - currMini;
            maxProfit = max(maxProfit, profit);
        }
        cout << "ans: " << ans << "maxprofit: " << maxProfit << endl;
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
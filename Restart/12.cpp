#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution
{
public:
    int getMinDiff(vector<int> &a, int k)
    {
        // code here
        sort(a.begin(), a.end());
        int n = a.size();
        int globalMin = a[n - 1] - a[0];
        for (int i = 1; i < n - 1; i++)
        {
            vector<int> arr = a;
            for (int j = 0; j < n; j++)
            {
                // j < i ? arr[j] += k : arr[j] -= k;
                if (j < i)
                    arr[j] += k;
                else
                {
                    if (arr[j] - k >= 0)
                        arr[j] -= k;
                    else
                        break;
                }
            }
            int mini = *min_element(arr.begin(), arr.end());
            int maxi = *max_element(arr.begin(), arr.end());
            globalMin = min(globalMin, maxi - mini);
        }
        return globalMin;
    }
};

int main()
{
    int n, k;
    cout << "Enter the value of k :";
    cin >> k;
    cout << "Enter the size of the array:";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    Solution s;
    cout << s.getMinDiff(arr, k);
    return 0;
}
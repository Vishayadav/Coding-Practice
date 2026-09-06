#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int getMinDiff(vector<int> &arr, int k)
    {
        // code here
        sort(arr.begin(), arr.end());
        int front = arr[0] + k;
        int back = arr[arr.size() - 1] - k;
        return back - front;
    }
};

int main()
{
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the positive integer k: ";
    cin >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    Solution s;
    cout << s.getMinDiff(arr, k);
    return 0;
}
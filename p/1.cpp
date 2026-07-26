#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = nums[i];
        }
        else if (nums[i] <= max1 && nums[i] > max2)
        {
            max3 = max2;
            max2 = nums[i];
        }
        else if (nums[i] <= max2 && nums[i] > max3)
        {
            max3 = nums[i];
        }
    }
    int min1 = INT_MAX, min2 = INT_MAX, min3 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < min1)
        {
            min3 = min2;
            min2 = min1;
            min1 = nums[i];
        }
        else if (nums[i] >= min1 && nums[i] < min2)
        {
            min3 = min2;
            min2 = nums[i];
        }
        else if (nums[i] >= min2 && nums[i] < min3)
        {
            min3 = nums[i];
        }
    }

    cout << max((max1 * max2 * max3), (max1 * min1 * min2));
    return 0;
}
#include <iostream>
#include <vector>
#include <climits>
#include <math.h>
#include <algorithm>

using namespace std;

int binary_search(vector<int> v, int target)
{
    int left = 0, right = v.size() - 1;
    while (left <= right)
    {
        int mid = (left + (right - left) / 2);
        if (v[mid] == target)
        {
            return mid;
        }
        else if (v[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int target;
    cin >> target;
    cout << binary_search(v, target);
    return 0;
}
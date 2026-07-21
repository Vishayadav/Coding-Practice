#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int target;
    cin >> target;
    sort(v.begin(), v.end());
    int i = 0, j = n - 1;
    while (i <= j)
    {
        int mid = i + (j - i) / 2;
        if (v[mid] == target)
        {
            cout << mid;
            return 0;
        }
        else if (v[mid] < target)
            i = mid + 1;
        else
            j = mid - 1;
    }
    cout << "Element not present in the array.";
    return 0;
}
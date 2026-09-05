#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution
{
public:
    void nextPermutation(vector<int> &arr)
    {
        // code here
        int n = arr.size();
        int foothill, pivot;
        int i;
        for (i = 1; i < arr.size(); i++)
        {
            if (arr[i] < arr[i - 1])
            {
                foothill = i;
                break;
            }
        }
        // Last permutation case:
        if (i == arr.size())
        {
            reverse(arr.begin(), arr.end());
            return;
        }
        // foothill = left marker.
        for (int j = n; j > foothill; j--)
        {
            if (arr[j] > arr[foothill])
            {
                pivot = j;
                break;
            }
        }
        // Swap foothill and pivot.
        swap(arr[foothill], arr[pivot]);
        // Reverse elements after foothill.
        cout << "foothill: " << foothill << endl;
        cout << "foothill value: " << arr[foothill] << endl;
        cout << "arr.end() value: " << *(arr.end()) << endl;
        reverse(arr.begin() + foothill + 1, arr.end());
    }
};

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    Solution s;
    s.nextPermutation(arr);
    for (int i : arr)
        cout << i << " ";
    return 0;
}
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
        int pivoti, pivotj, i;
        for (i = n - 2; i >= 0; i--)
        {
            if (arr[i] < arr[i + 1])
            {
                // Decreasing pattern broke here.
                pivoti = i;
                break;
            }
        }
        // Last Permutation case:
        if (i < 0)
        {
            reverse(arr.begin(), arr.end());
            return;
        }
        // Left marker found.
        for (int j = n - 1; j > pivoti; j--)
        {
            if (arr[j] > arr[pivoti])
            {
                pivotj = j;
                break;
            }
        }
        // Right marker found.
        // Swap
        swap(arr[pivoti], arr[pivotj]);
        // Reverse everything after pivoti element.
        reverse(arr.begin() + pivoti + 1, arr.end());
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
    cout << "Reached Printing";
    for (int i : arr)
        cout << i << " ";
    return 0;
}
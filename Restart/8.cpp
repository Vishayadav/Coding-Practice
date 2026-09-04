#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void rotateArr(vector<int> &arr, int d)
    {
        // code here
        int n = arr.size();
        d = d % n;
        vector<int> start;
        start.insert(start.end(), arr.begin() + d, arr.end());
        start.insert(start.end(), arr.begin(), arr.begin() + d);
        arr = start;
    }
};

int main()
{
    int n, d;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the number of rotations: ";
    cin >> d;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    Solution s;
    s.rotateArr(arr, d);
    for (int i : arr)
        cout << i << " ";

    return 0;
}
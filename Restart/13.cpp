#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    unordered_set<int> res;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (i == j || i == k || j == k)
                    continue;
                if (arr[i] == 0)
                    continue;
                if (arr[k] % 2 != 0)
                    continue;
                int num = arr[i] * 100 + arr[j] * 10 + arr[k];
                res.insert(num);
            }
        }
    }
    for (auto i : res)
        cout << i << " ";
    return 0;
}
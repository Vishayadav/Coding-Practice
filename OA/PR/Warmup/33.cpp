#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void nextPermutation(vector<int> &v)
{
    int n = v.size(), pivot = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
        {
            pivot = i;
            break;
        }
    }
    if (pivot == -1)
    {
        reverse(v.begin(), v.end());
        return;
    }
    int swapthis;
    for (int i = n - 1; i > pivot; i--)
    {
        if (v[i] > v[pivot])
        {
            swapthis = i;
            break;
        }
    }
    swap(v[pivot], v[swapthis]);
    reverse(v.begin() + pivot + 1, v.end());
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    nextPermutation(v);
    for (int i : v)
        cout << i << " ";
    return 0;
}
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
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int mid = (n + 1) / 2;
    for (int i = 0; i < mid; i++)
        cout << v[i] << " ";
    for (int i = n - 1; i >= mid; i--)
        cout << v[i] << " ";
    return 0;
}
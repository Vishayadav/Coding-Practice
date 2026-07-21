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
    int k;
    cin >> k;
    reverse(v.begin(), v.begin() + k - 1);
    reverse(v.begin() - 1 + k, v.end());
    reverse(v.begin(), v.end());
    for (int i : v)
        cout << i << " ";
    return 0;
}
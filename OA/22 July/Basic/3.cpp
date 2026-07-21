#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int max = INT_MIN;
    for (int i : v)
        if (i >= max)
            max = i;
    cout << max;
    return 0;
}
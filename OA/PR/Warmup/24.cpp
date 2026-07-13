// Checking of b is a subset of a or not. (Frequency considered).
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    auto left = a, right = b;
    for (int i = 0; i < m; i++)
    {
        if (left[i] != right[i])
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";

    
    return 0;
}
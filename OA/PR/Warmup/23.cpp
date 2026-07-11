// Checking of b is a subset of a or not. (Frequency not considered).
#include <iostream>
#include <vector>
#include <set>

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
    set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(a[i]);
    for (int i = 0; i < m; i++)
    {
        if (s.count(b[i]) == 0)
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}
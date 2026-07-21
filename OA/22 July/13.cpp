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
    sort(v.begin(), v.end());
    for (int i = 1; i < n; i++)
    {
        if (v[i] != v[i - 1] + 1)
        {
            cout << v[i - 1] + 1;
            return 0;
        }
    }
    cout << "None";
    return 0;
}
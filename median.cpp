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
    float median;
    if (n % 2 == 0)
    {
        // even
        median = ((v[n / 2.0]) + (v[(n / 2.0) - 1])) / 2.0;
    }
    else
    {
        median = (v[n / 2.0]);
    }
    cout << float(median);
    return 0;
}
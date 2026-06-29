#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // Input
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    if (n == 0)
    {
        cout << 0;
        return 0;
    }
    // Processing
    int num = 0, temp;
    m %= n;
    while (num < m)
    {
        temp = v[0];
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
                v[i] = temp;
            else
                v[i] = v[i + 1];
        }
        num++;
    }

    // Output
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}
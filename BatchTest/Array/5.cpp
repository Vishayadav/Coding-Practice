#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Input
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (n == 0)
    {
        cout << n;
        return 0;
    }
    if (n == 1)
    {
        cout << v[0];
        return 0;
    }
    // Processing
    int left = 0, right = 0, temp;
    while (right < n)
    {
        if (v[left] == 0)
        {
            while (v[right] == 0 && right < n)
            {
                right++;
            }
            // v[right] != 0
            temp = v[left];
            v[left] = v[right];
            v[right] = temp;
            left++;
        }
        else
        {
            left++;
            right++;
        }
    }

    // output
    for (int i : v)
        cout << i << " ";
    return 0;
}
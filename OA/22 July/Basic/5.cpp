#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int maxi = INT_MIN, secMaxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > maxi)
        {
            secMaxi = maxi;
            maxi = v[i];
        }

        else if (v[i] < maxi && v[i] > secMaxi)
        {
            secMaxi = v[i];
        }
    }
    if (secMaxi == INT_MIN)
        secMaxi = -1;
    cout << maxi << " " << secMaxi;
    return 0;
}
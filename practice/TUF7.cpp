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
    int product = 1, maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            product = 1;
            for (int k = i; k <= j; k++)
            {
                product = product * v[k];
                maxi = max(maxi, product);
            }
        }
    }
    cout << maxi;
    return 0;
}
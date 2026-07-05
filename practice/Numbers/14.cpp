#include <iostream>
#include <climits>
#include <vector>

using namespace std;

vector<int> helper(int n)
{
    if (n == 0)
        return {0, 0};
    int maxi = INT_MIN, mini = INT_MAX;
    if (n < 0)
    {
        n = n - (2 * n);
    }
    while (n > 0)
    {
        int digit = n % 10;
        maxi = max(maxi, digit);
        mini = min(mini, digit);
        n /= 10;
    }
    return {maxi, mini};
}

int main()
{
    int n;
    cin >> n;
    vector<int> ans = helper(n);
    cout << ans[0] << " " << ans[1];
    return 0;
}
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
    {
        cin >> v[i];
    }
    int mini = INT_MAX;
    for (int i : v)
    {
        if (i < mini)
            mini = i;
    }
    cout << mini;
    return 0;
}
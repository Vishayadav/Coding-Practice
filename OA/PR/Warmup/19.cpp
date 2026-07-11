#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void linear_search(vector<int> v, int target)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == target)
        {
            cout << i;
            return;
        }
    }
    cout << -1;
    return;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int target;
    cin >> target;
    linear_search(v, target);
    return 0;
}
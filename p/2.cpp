#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, x = 0, t;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        x ^= t;
    }
    cout << x;
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] >= v[i])
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}
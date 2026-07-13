#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    int a, b;
    cin >> a;
    vector<int> v(a);
    for (int i = 0; i < a; i++)
        cin >> v[i];
    cin >> b;
    vector<int> w(b);
    for (int i = 0; i < b; i++)
        cin >> w[i];
    unordered_map<int, int> mp;
    for (int i = 0; i < a; i++)
    {
        mp[v[i]] = 1;
    }
    for (int i = 0; i < b; i++)
    {
        if (mp.find(w[i]) == mp.end())
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> v, int m)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == m)
            return i;
    }
    return -1;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << search(v, m);
    return 0;
}
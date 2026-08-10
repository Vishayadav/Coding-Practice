#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &v, vector<int> &w, int o)
{
    int i = o - 1, j = w.size() - 1, k = v.size() - 1;
    while (i >= 0 && j >= 0)
    {
        if (v[i] >= w[j])
            v[k--] = v[i--];
        else
            v[k--] = w[j--];
    }
    while (j >= 0)
        v[k--] = w[j--];
}

int main()
{
    int n, o, m;
    cin >> n >> o >> m;
    vector<int> v(n), w(m);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < m; i++)
        cin >> w[i];
    merge(v, w, o);
    for (int i : v)
        cout << i << " ";
    return 0;
}
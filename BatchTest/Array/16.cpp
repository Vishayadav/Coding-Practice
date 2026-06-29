#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<int> &v, int m)
{
    int temp = v[0];
    for (int i = 0; i < v.size(); i++)
    {
        if (i == v.size() - 1)
            v[i] = temp;
        else
            v[i] = v[i + 1];
    }
    return;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int num = 0;
    m %= n;
    while (num < m)
    {
        rotate(v, m);
        num++;
    }
    for (int i : v)
        cout << i << " ";
    return 0;
}
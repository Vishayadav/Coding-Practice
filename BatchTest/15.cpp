#include <iostream>
#include <vector>

using namespace std;

int freq(vector<int> v, int m)
{
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == m)
            count++;
    }
    return count;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << freq(v, m);
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int even(vector<int> v)
{
    int count = 0;
    for (int i : v)
    {
        if (i % 2 == 0)
            count++;
    }
    return count;
}

int odd(vector<int> v)
{
    int count = 0;
    for (int i : v)
    {
        if (i % 2 != 0)
            count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << "Even: " << even(v) << " Odd: " << odd(v);
    return 0;
}
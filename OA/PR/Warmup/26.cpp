#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isSubset(vector<int> v1, vector<int> v2)
{
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    int i = 0, j = 0;
    while (i < v1.size() && j < v2.size())
    {
        if (v1[i] == v2[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    if (j == v2.size())
        return true;
    else
        return false;
}

int main()
{
    int a, b;
    cin >> a;
    vector<int> v1(a);
    for (int i = 0; i < a; i++)
        cin >> v1[i];
    cin >> b;
    vector<int> v2(b);
    for (int i = 0; i < b; i++)
        cin >> v2[i];
    if (isSubset(v1, v2) == 1)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
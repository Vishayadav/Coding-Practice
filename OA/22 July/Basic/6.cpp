#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int mini = INT_MAX, secMini = INT_MAX;
    for (int i : v)
    {
        if (i < mini)
        {
            secMini = mini;
            mini = i;
        }
        else if (v[i] > mini && v[i] < secMini)
        {
            secMini = v[i];
        }
    }
    if (secMini == INT_MAX)
        secMini = -1;
    cout << mini << " " << secMini;
    return 0;
}
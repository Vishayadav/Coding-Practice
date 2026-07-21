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
    int i = 0, j = 0;
    while (i < n && j < n)
    {
        if (v[i] == 0)
        {
            while (j < n && v[j] == 0)
                j++;
            // v[j] != 0
            if (j == n)
                break;
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
        if (j == n)
            break;
        i++;
        j++;
    }
    for (int i : v)
        cout << i << " ";
    return 0;
}
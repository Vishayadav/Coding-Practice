#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int d;
    cin >> d;
    // vector<int>
    //     v(n);
    vector<int> left(d);
    vector<int> right(n - d);
    for (int i = 0; i < d; i++)
        cin >> left[i];
    for (int i = d; i < n; i++)
        cin >> right[i];
    for (int i = d; i < n; i++)
        cout << right[i] << " ";
    for (int i = 0; i < d; i++)
        cout << left[i] << " ";

    return 0;
}
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
    vector<int>::iterator it;
    vector<int>::reverse_iterator rit;
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *(it) << " ";
    cout << endl;
    for (auto rit = v.rbegin(); rit != v.rend(); rit++)
        cout << *(rit) << " ";

    return 0;
}
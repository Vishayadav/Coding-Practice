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
    int target;
    cin >> target;
    for (int i = 0; i < n; i++)
        if (v[i] == target)
        {
            cout << i << endl;
            return 0;
        }
    cout << "Element not present in the array!";
    return 0;
}
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
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int temp = v[left];
        v[left] = v[right];
        v[right] = temp;
        left++;
        right--;
    }
    for (int i : v)
        cout << i << " ";
    return 0;
}
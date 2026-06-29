#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0, x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
    }
    cout << (sum / n);

    return 0;
}
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Not Prime";
            return 0;
        }
    }
    cout << "Prime" << endl;
    return 0;
}
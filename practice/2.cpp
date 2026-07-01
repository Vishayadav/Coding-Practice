#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x, count = 0;
    float sum = 0.00;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 2 != 0)
        {
            count++;
            sum += x;
        }
    }
    cout << count << " " << fixed << setprecision(2) << (sum / count);
    return 0;
}
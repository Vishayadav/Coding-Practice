#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double area = (22.0 / 7) * (n / 2.0) * (n / 2.0);
    cout << fixed << setprecision(2) << area << endl;
    return 0;
}
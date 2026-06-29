#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int newN = n % 100;
    if (newN == 00 && n % 4 == 0)
    {
        cout << "Leap Year";
    }
    else if (newN % 4 == 0)
    {
        cout << "Leap Year";
    }
    else
    {
        cout << "Not a Leap year";
    }
    return 0;
}
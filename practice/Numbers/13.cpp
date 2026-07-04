#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int newNum = n % 100;
    if (newNum == 0 && n % 4 == 0)
        cout << "Leap Year";
    else if (newNum % 4 == 0)
        cout << "Leap Year";
    else
        cout << "Not a Leap year";
    return 0;
}
#include <iostream>

using namespace std;

void leap(int n)
{
    int newNum = n % 100;
    if ((newNum != 00 && newNum % 4 == 0) || (newNum == 00 && n % 400 == 0))
        cout << "Yes";
    else
        cout << "No";
}

int main()
{
    int n;
    cin >> n;
    leap(n);
    return 0;
}
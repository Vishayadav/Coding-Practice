#include <iostream>
#include <math.h>

using namespace std;

int squareRoot(int x)
{
    if (x == 0)
        return 0;
    double guess = x;
    while (abs((guess * guess) - x) > 1e-6)
        guess = (guess + (x / guess)) / 2.0;
    return (int)guess;
}

int main()
{
    int x;
    cin >> x;
    cout << squareRoot(x);
    return 0;
}
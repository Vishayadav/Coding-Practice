#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

int main()
{
    string line;
    getline(cin, line);
    string token;
    stringstream ss(line);
    float sum = 0.0, n = 0.0;
    while (getline(ss, token, ' '))
    {
        sum += stoi(token);
        n++;
    }
    cout << fixed << setprecision(2) << float((sum / n));
    return 0;
}
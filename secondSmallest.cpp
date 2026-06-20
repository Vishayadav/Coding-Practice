#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <sstream>

using namespace std;

int main()
{
    vector<int> v;
    string line, token;
    getline(cin, line);
    stringstream ss(line);
    int num, mini = INT_MAX, s = INT_MAX;
    while (getline(ss, token, ' '))
    {
        num = stoi(token);
        if (num < mini)
        {
            s = mini;
            mini = num;
        }
        else if (num > mini && num < s)
        {
            s = num;
        }
    }
    if (s == INT_MAX)
        cout << -1;
    else
        cout << s;
    return 0;
}
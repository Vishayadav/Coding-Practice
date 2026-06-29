#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <climits>

using namespace std;

int main()
{
    vector<int> v;
    string line;
    getline(cin, line);
    string token;
    int mini = INT_MAX;
    stringstream ss(line);
    while (getline(ss, token, ' '))
    {
        mini = min(mini, stoi(token));
        v.push_back(stoi(token));
    }
    cout << mini;
    return 0;
}
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
    int maxi = INT_MIN;
    stringstream ss(line);
    while (getline(ss, token, ' '))
    {
        maxi = max(maxi, stoi(token));
        v.push_back(stoi(token));
    }
    cout << maxi;
    return 0;
}
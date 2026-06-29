#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <climits>

using namespace std;

int main()
{
    string line, token;
    getline(cin, line);
    stringstream ss(line);
    int maxi = INT_MIN;
    while (ss >> token)
    {
        maxi = max(maxi, stoi(token));
    }
    cout << maxi;
    return 0;
}
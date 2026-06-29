#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string line, token;
    getline(cin, line);
    stringstream ss(line);
    vector<string> v;
    while (ss >> token)
    {
        v.push_back(token);
    }
    reverse(v.begin(), v.end());
    for (auto i : v)
        cout << i << " ";
    return 0;
}
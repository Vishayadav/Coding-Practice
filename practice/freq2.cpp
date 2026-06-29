#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <map>

using namespace std;

int main()
{
    string line;
    getline(cin, line);
    string token;
    stringstream ss(line);
    map<int, int> mp;
    while (getline(ss, token, ' '))
    {
        if (mp.find(stoi(token)) != mp.end())
            mp[stoi(token)]++;
        else
            mp[stoi(token)] = 1;
    }
    for (auto it : mp)
    {
        cout << it.second << " ";
    }
    return 0;
}
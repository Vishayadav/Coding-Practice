// Anagram or not ?
#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string str;
    unordered_map<char, int> mp;
    for (char ch : s)
    {
        if (mp.find(ch) == mp.end())
        {
            mp[ch] = 1;
            str.push_back(ch);
        }
        else
        {
            continue;
        }
    }
    cout << str;
    return 0;
}
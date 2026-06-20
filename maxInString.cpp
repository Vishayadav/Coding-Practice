#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int maxi = 0;
    map<char, int> mp;
    for (char ch : s)
    {
        if (mp.find(ch) != mp.end())
        {
            mp[ch]++;
        }
        else
        {
            mp[ch] = 1;
        }
        if (mp[ch] > maxi)
            maxi = mp[ch];
    }
    for (auto p : mp)
    {
        if (p.second == maxi)
        {
            cout << p.first << " " << maxi;
            break;
        }
    }
    return 0;
}
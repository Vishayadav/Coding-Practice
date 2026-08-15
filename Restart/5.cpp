// Longest Palindromic Substring
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> getSubstrings(string line)
{
    vector<string> res;
    for (int i = 0; i < line.length(); i++)
    {
        for (int j = i; j < line.length(); j++)
        {
            res.push_back(line.substr(i, j - i + 1));
        }
    }
    return res;
}

bool isPalindrome(string s)
{
    int i = 0, j = s.size() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main()
{
    string line;
    getline(cin, line);
    vector<string> subStrings = getSubstrings(line);
    // for (string s : subStrings)
    //     cout << s << " ";
    size_t maxi = 0;
    pair<int, string> p;
    for (int i = 0; i < subStrings.size(); i++)
    {
        if (isPalindrome(subStrings[i]))
        {
            maxi = max(maxi, subStrings[i].length());
            if (subStrings[i].length() == maxi)
                p = {subStrings[i].length(), subStrings[i]};
        }
    }
    cout << p.second;
    return 0;
}
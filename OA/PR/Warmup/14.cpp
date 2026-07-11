#include <iostream>
#include <string>
#include <sstream>

using namespace std;

pair<int, int> count(string s)
{
    int sumV = 0, sumC = 0;
    for (char ch : s)
    {
        if (isalpha(ch))
        {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                sumV++;
            else
                sumC++;
        }
    }
    return {sumV, sumC};
}

int main()
{
    string line, token;
    getline(cin, line);
    stringstream ss(line);
    int V = 0, C = 0;
    while (ss >> token)
    {
        pair<int, int> ans = count(token);
        V += ans.first;
        C += ans.second;
    }
    cout << V << " " << C;
}
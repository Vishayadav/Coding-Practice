#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
    string str, token;
    getline(cin, str);
    stringstream ss(str);
    while (ss >> token)
    {
        int n = token.length();
        for (int i = 0; i < n; i++)
        {
            cout << char(tolower(token[i]));
        }
        cout << " ";
    }
    cout << endl;
    stringstream ss2(str);
    while (ss2 >> token)
    {
        int n = token.length();
        for (int i = 0; i < n; i++)
        {
            cout << char(toupper(token[i]));
        }
        cout << " ";
    }

    return 0;
}
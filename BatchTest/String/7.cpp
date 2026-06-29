#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
    string str;
    cin >> str;
    for (char s : str)
    {
        cout << char(tolower(s));
    }
    for (char s : str)
    {
        cout << char(toupper(s));
    }
    return 0;
}
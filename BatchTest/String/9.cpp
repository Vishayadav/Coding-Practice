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
        cout << token;
    }

    return 0;
}
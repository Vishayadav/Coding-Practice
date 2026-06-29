#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string line, token;
    getline(cin, line);
    stringstream ss(line);
    int count = 0;
    while (ss >> token)
    {
        count++;
    }
    cout << count;
    return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string line;
    getline(cin, line);
    stringstream ss(line);
    string token;
    int sum = 0;
    while (ss >> token)
    {
        sum += stoi(token);
    }
    cout << sum;
    return 0;
}
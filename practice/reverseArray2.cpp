#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string line;
    getline(cin, line);
    string token;
    stringstream ss(line);
    int n = 0, i = 0;
    while (getline(ss, token, ','))
    {
        n++;
    }
    vector<int> v(n);
    stringstream ss2(line);
    while (getline(ss2, token, ','))
    {
        v[n - i - 1] = stoi(token);
        i++;
    }
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}
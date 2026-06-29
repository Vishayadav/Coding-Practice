#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string line, token;
    getline(cin, line);
    stringstream ss(line);
    vector<int> v;
    while (ss >> token)
    {
        v.push_back(stoi(token));
    }
    vector<int> rep = v;
    sort(rep.begin(), rep.end());
    bool flag = true;
    for (int i = 0; i < rep.size(); i++)
    {
        if (rep[i] != v[i])
        {
            flag = false;
            break;
        }
    }
    flag == true ? cout << "Sorted" : cout << "Not Sorted";
    return 0;
}
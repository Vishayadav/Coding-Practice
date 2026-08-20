#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int reverseInt(int n)
{
    string s = to_string(n);
    if (s[0] == '-')
    {
        reverse(s.begin(), s.end());
        s.pop_back();
        s.insert(s.begin(), '-');
    }
    else
    {
        reverse(s.begin(), s.end());
    }
    return stoi(s);
}

int main()
{
    int n;
    cin >> n;
    cout << reverseInt(n);
    return 0;
}
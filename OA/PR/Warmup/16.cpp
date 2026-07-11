// Anagram or not ?
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string s, b;
    cin >> s >> b;
    sort(s.begin(), s.end());
    sort(b.begin(), b.end());
    b == s ? cout << "Yes" : cout << "No";
    return 0;
}
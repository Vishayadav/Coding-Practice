#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    string aa = a, bb = b;
    for (int i = 0; i < a.size(); i++)
        aa[i] = char(tolower(a[i]));

    for (int i = 0; i < a.size(); i++)
        bb[i] = char(tolower(b[i]));

    sort(aa.begin(), aa.end());
    sort(bb.begin(), bb.end());
    aa == bb ? cout << "Anagram" : cout << "Not Anagram";
}
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char ch;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
        cout << char(toupper(ch));
    else
        cout << char(tolower(ch));
}
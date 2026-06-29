#include <iostream>
#include <string>

using namespace std;

int freq(string str, char ch)
{
    int count = 0;
    int n = str.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (str[i] == ch)
            return i;
    }
    return -1;
}

int main()
{
    string str;
    char ch;
    cin >> str >> ch;
    cout << freq(str, ch);
    return 0;
}
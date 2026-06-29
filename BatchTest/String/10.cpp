#include <iostream>
#include <string>

using namespace std;

int freq(string str, char ch)
{
    int count = 0;
    int n = str.size();
    for (char c : str)
    {
        if (c == ch)
            count++;
    }
    return count;
}

int main()
{
    string str;
    char ch;
    cin >> str >> ch;
    cout << freq(str, ch);
    return 0;
}
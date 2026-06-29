#include <iostream>
#include <string>

using namespace std;

string rev(string str)
{
    int n = str.length();
    int left = 0, right = n - 1;
    while (left <= right)
    {
        swap(str[left], str[right]);
        left++;
        right--;
    }
    return str;
}

int main()
{
    string str;
    cin >> str;
    cout << rev(str);
    return 0;
}
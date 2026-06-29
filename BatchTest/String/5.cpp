#include <iostream>
#include <string>

using namespace std;

bool p(string str)
{
    int n = str.size();
    int left = 0, right = n - 1;
    while (left <= right)
    {
        if (str[left] != str[right])
            return false;
        left++;
        right--;
    }
    return true;
}

int main()
{
    string str;
    cin >> str;
    p(str) == true ? cout << "Palindrome" : cout << "Not Palindrome";
    return 0;
}
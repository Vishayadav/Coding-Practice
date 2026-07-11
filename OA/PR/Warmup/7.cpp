// Plaindrome or not
#include <iostream>
#include <algorithm>

using namespace std;

int palindrome(string n)
{
    string org = n;
    reverse(n.begin(), n.end());
    if (n == org)
        cout << "Yes";
    else
        cout << "No";
}

int main()
{
    string n;
    cin >> n;
    palindrome(n);
    return 0;
}
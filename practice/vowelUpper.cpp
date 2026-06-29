#include <iostream>
using namespace std;

void v(string n)
{
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == 'a' || n[i] == 'e' || n[i] == 'i' || n[i] == 'o' || n[i] == 'u')
        {
            n[i] = toupper(n[i]);
        }
    }
    cout << n;
}

int main()
{
    string n;
    cin >> n;
    v(n);
    return 0;
}
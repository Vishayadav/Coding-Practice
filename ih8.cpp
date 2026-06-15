/* Take a string that has numbers in it as an input Eg: a string like 10, 20, 30.
Observe: It has commas in between. You need to sepearte the numbers like 10 and 20 and print them.*/

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string token;
    while (getline(ss, token, ','))
    {
        int si = stoi(token);
        cout << si << " ";
    }
    return 0;
}
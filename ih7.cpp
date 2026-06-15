#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // string name;
    // getline(cin, name);
    // cout << n << endl;
    // cout << "[" << name << "]" << endl;
    // return 0;

    /* Not to self:
    first you took int as an input then a string.
    Expected output(Suppose): 21
                              Aira Yadav
    but, cin reads int int 21/n as 21 and leaves the 21. Then getline starts at \n itself , getline uses \n as a delimiter and well , the first thing that it sees is a \n so it assumes that the name is an empty string and doesnt wait for the input to be given.
    Actual output: 21
                   []
     */

    // Solution : use cin.ignore() in between.

    int n;
    cin >> n;
    cin.ignore();
    string name;
    getline(cin, name);
    cout << n << endl
         << name << endl;
    return 0;
}
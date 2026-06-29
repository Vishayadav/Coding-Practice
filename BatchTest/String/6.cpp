#include <iostream>
#include <string>
#include <vector>

using namespace std;

int vow(string str)
{
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int count = 0;
    for (char c : str)
    {
        for (char ch : vowels)
        {
            if (c == ch)
                count++;
        }
    }
    return count;
}

// int con(string str)
// {
//     vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
//     int count = 0;
//     for (char c : str)
//     {
//         for (char ch : vowels)
//         {
//             if (c != ch)
//                 count++;
//         }
//     }
//     return count;
// }

int main()
{
    string str;
    cin >> str;
    cout << "Vowels : " << vow(str) << " \nConsonants : " << str.length() - vow(str);
    return 0;
}
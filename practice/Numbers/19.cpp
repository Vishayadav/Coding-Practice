#include <iostream>
#include <vector>

using namespace std;

class student
{
public:
    string name;
    int roll;
    student(string n, int r) : name(n), roll(r) {};
};

int main()
{
    vector<student> v;
    v.emplace_back("Aira", 21);
    v.push_back("Aira", 21);
    student s("Maan", 26);
    v.push_back(s);
    for (auto i : v)
        cout << i.name << " " << i.roll << endl;
    return 0;
}
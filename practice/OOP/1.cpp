#include <iostream>
#include <string>

using namespace std;

class fruit
{
public:
    string name;
    string color;
    bool isSweet;
    fruit()
    {
        this->name = "Apple";
        this->color = "Red";
        this->isSweet = true;
    }
    fruit(string n, string c, bool s)
    {
        this->name = n;
        this->color = c;
        this->isSweet = s;
    }
};

int main()
{
    fruit obj;
    cout << obj.name << " " << obj.color << " " << obj.isSweet << endl;
    return 0;
}
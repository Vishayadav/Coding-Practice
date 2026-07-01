#include <iostream>

using namespace std;

class fruit
{
public:
    string name, color;
    bool isSweet;
    fruit()
    {
        this->name = "Banana";
        this->color = "Yellow";
        this->isSweet = true;
    }
    fruit(string n, string c, bool s)
    {
        this->name = n;
        this->color = c;
        this->isSweet = true;
    }
    void changeColor(string c)
    {
        this->color = c;
    }
};

int main()
{
    fruit obj("Apple", "Red", true);
    cout << obj.name << " " << obj.color << " " << obj.isSweet << endl;
    fruit obj1;
    cout << obj1.name << " " << obj1.color << " " << obj1.isSweet << endl;
    fruit *obj2 = new fruit("Strawberry", "Red", true);
    cout << obj2->name << " " << obj2->color << " " << obj2->isSweet << endl;
    delete obj2;
    obj1.changeColor("Green");
    cout << obj1.color;
    return 0;
}
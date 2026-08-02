#include <iostream>
using namespace std;

class animal
{
public:
    virtual ~animal() = 0; // The destructor can be made pure virtual if you lack of functions that should have their own soecific implementations in child classes. However, we must also provide a definition for the destructor since the child class destructors chian up to the parent class destructor and it should exists in order to be freed or else you will get an error.
};

animal::~animal()
{
    cout << "This is the parent class destructor" << endl;
}

class dog : public animal
{
public:
    void childclassfunction()
    {
        cout << "we are inside child class" << endl;
    }

    ~dog() { cout << "This is the child class destructor" << endl; }
};

int main()
{
    dog *newDog = new dog();
    newDog->childclassfunction();

    delete newDog;
    newDog = nullptr;
    return 0;
}
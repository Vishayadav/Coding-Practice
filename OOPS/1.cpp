// Pure virtual functions

#include <iostream>
using namespace std;

class animal // This class becomes abstract since it has a pure virtual function.
{

    // An abstract class's object cannot be instantiated.
public:
    virtual void makeSound() = 0; // This is the pure virtual function. It had no body and no code. It enforces the child classes to have their version of implementation of this method compulsorily or else the child class's object can not be instantiated.
};

class dog : public animal
// This is the child class.
{
public:
    void makeSound() override // Overridding the base class's pure virtual function.
    {
        cout << "Bark" << endl;
    }
};

int main()
{
    dog *newDog = new dog();
    newDog->makeSound();
    return 0;
}
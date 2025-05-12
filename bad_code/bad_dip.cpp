#include<iostream>
using namespace std;

class BadWiredKeyboard
{
public:
    void type()
    {
        cout<<"Wired typing..."<<endl;
    }
};

class BadComputer
{
    BadWiredKeyboard keyboard;
public:
    void type()
    {
        keyboard.type();
    }
};

int main()
{
    BadComputer comp;
    comp.type();
    return 0;
}

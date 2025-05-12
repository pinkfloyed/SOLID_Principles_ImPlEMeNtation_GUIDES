#include<iostream>
#include<memory>
using namespace std;

class IKeyboard
{
public:
    virtual void input()=0;
    virtual ~IKeyboard() {}
};

class WiredKeyboard : public IKeyboard
{
public:
    void input() override
    {
        cout<<"Typing with wired keyboard"<<endl;
    }
};

class WirelessKeyboard:public IKeyboard
{
public:
    void input() override
    {
        cout<<"Typing with wireless keyboard"<<endl;
    }
};

class Computer
{
    unique_ptr<IKeyboard>keyboard;
public:
    Computer(IKeyboard* kb):keyboard(kb) {}
    void startTyping()
    {
        keyboard->input();
    }
};

int main()
{
    Computer comp(new WirelessKeyboard());
    comp.startTyping();
    return 0;
}

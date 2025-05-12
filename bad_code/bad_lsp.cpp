#include<iostream>
#include<stdexcept>
using namespace std;

class BadBird
{
public:
    virtual void fly()
    {
        cout<<"Flying..."<<endl;
    }
};

class BadPenguin:public BadBird
{
public:
    void fly() override
    {
        throw runtime_error("Penguin can't fly");
    }
};

int main()
{
    BadBird* bird=new BadPenguin();
    try
    {
        bird->fly();
    }
    catch(exception& e)
    {
        cout<<"Error: "<<e.what()<<endl;
    }
    delete bird;
    return 0;
}

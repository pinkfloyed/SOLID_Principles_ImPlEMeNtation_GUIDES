#include<iostream>
#include<stdexcept>
using namespace std;

class BadMachine
{
public:
    virtual void print()=0;
    virtual void scan()=0;
    virtual void fax()=0;
};

class BadPrinter:public BadMachine
{
public:
    void print() override
    {
        cout<<"Printing..."<<endl;
    }
    void scan() override
    {
        throw runtime_error("Unsupported");
    }
    void fax() override
    {
        throw runtime_error("Unsupported");
    }
};

int main()
{
    BadPrinter p;
    p.print();
    try
    {
        p.scan();
    }
    catch(exception& e)
    {
        cout<<"Error: "<<e.what()<<endl;
    }
    return 0;
}

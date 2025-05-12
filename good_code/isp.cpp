#include<iostream>
using namespace std;

class IPrinter
{
public:
    virtual void print()=0;
};

class IScanner
{
public:
    virtual void scan()=0;
};

class IFax
{
public:
    virtual void fax()=0;
};

class BasicPrinter:public IPrinter
{
public:
    void print() override
    {
        cout<<"Basic printing..."<<endl;
    }
};

class MultiFunctionPrinter:public IPrinter,public IScanner,public IFax
{
public:
    void print() override
    {
        cout<<"Printing..."<<endl;
    }
    void scan() override
    {
        cout<<"Scanning..."<<endl;
    }
    void fax() override
    {
        cout<<"Faxing..."<<endl;
    }
};

int main()
{
    BasicPrinter bp;
    bp.print();
    MultiFunctionPrinter mfp;
    mfp.scan();
    return 0;
}

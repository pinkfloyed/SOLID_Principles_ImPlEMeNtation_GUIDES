#include<iostream>
using namespace std;

class Bird
{
public:
    virtual void move()=0;
};

class Sparrow:public Bird
{
public:
    void move() override
    {
        cout<<"Sparrow flies"<<endl;
    }
};

class Penguin:public Bird
{
public:
    void move() override
    {
        cout<<"Penguin swims"<<endl;
    }
};

int main()
{
    Sparrow s;
    Penguin p;
    s.move();
    p.move();
    return 0;
}

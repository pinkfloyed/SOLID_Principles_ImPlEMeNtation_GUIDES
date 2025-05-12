#include<iostream>
using namespace std;

class BadNotificationService
{
public:
    void notify(const string& type,const string& message)
    {
        if(type=="email")
		{
            cout<<"Email: "<<message<<endl;
        }
        else if(type=="sms")
        {
            cout<<"SMS: "<<message<<endl;
        }
    }
};

int main()
{
    BadNotificationService service;
    service.notify("email","Hi");
    service.notify("sms","Hello");
    return 0;
}


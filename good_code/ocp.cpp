#include<iostream>
using namespace std;

class Notification
{
public:
    virtual void send(const string& message)=0;
};

class EmailNotification : public Notification
{
public:
    void send(const string& message) override
    {
        cout<<"Sending Email: "<<message<<endl;
    }
};

class SMSNotification:public Notification
{
public:
    void send(const string& message) override
    {
        cout<<"Sending SMS: "<<message<<endl;
    }
};

class NotificationService
{
public:
    void notifyUser(Notification* notification,const string& message)
    {
        notification->send(message);
    }
};

int main()
{
    NotificationService service;
    EmailNotification email;
    SMSNotification sms;
    service.notifyUser(&email,"Hello via Email");
    service.notifyUser(&sms,"Hello via SMS");
    return 0;
}

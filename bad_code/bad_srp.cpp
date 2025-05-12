#include<iostream>
using namespace std;

class BadReportManager
{
public:
    void generateAndPrintReport()
    {
        string report="Sales Data...";
        cout<<"PDF: "<<report<<endl;
    }
};

int main() {
    BadReportManager manager;
    manager.generateAndPrintReport();
    return 0;
}


#include<iostream>
#include<string>
using namespace std;

class ReportGenerator
{
public:
    string generateReport()
    {
        return "Monthly sales data...";
    }
};

class ReportFormatter
{
public:
    string formatToPDF(const string& content) {
        return "PDF: " + content;
    }
};

int main()
{
    ReportGenerator generator;
    ReportFormatter formatter;
    string content = generator.generateReport();
    cout<<formatter.formatToPDF(content)<<endl;
    return 0;
}

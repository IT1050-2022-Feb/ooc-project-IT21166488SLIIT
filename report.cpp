#include <iostream>
#include <string>
#include "report.h"
using namespace std;

Report::Report(){}
Report::Report(int id, string type)
{
    reportID = id;
    reportType = type;
}

void Report::displayReport()
{
    cout<<"Report ID: "<<reportID<<endl;
    cout<<"Report Type: "<<reportType<<endl<<endl;
}

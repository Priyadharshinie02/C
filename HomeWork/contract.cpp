#include<iostream>
using namespace std;
int main()
{
    int totalcontractdays=900;
    int daysinyears=totalcontractdays/365;
    int months=totalcontractdays/30;
    int daysremaining=totalcontractdays%30;
    cout << "Total contract days: " << totalcontractdays << endl;
    cout << "Total years: " << daysinyears << endl;
    cout << "Total months: " << months << endl;
    cout << "Remaining days: " << daysremaining << endl;
    return 0;
}
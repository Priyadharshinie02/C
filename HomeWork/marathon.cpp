#include<iostream>
using namespace std;
int main()
{
    int totalsec=7384;
    int hours=totalsec/3600;
    int minutes=totalsec/60;
    int remainingsec=totalsec%60;
    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Remaining seconds: " << remainingsec << endl;
    return 0;

}
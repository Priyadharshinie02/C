#include<iostream>
using namespace std;
int main()
{
    int calloutfee=100;
    int perhr=12;
    int time=3;
    int totalfee=calloutfee+(perhr*time);
    cout<<"total fee is: "<<totalfee;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int marks=85;
    int attendance=90;
    int kiranmarks=88;
    int kiranattendance=92;
    bool kiraneligible=marks>=kiranmarks && attendance>=kiranattendance;
    cout<<"kiraneligible is:"<<kiraneligible<<endl;
    return 0; 
}
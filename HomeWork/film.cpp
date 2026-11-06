#include<iostream>
using namespace std;
int main()
{
    int filmminutes=135;
    int filmhours=filmminutes/60;
    int filmremainingminutes=filmminutes%60;
    
    cout << "Film duration in hours: " << filmhours << endl;
    cout << "Remaining minutes: " << filmremainingminutes << endl;
    return 0;

}
#include<iostream>
using namespace std;
int main()
{
    int totalunits=250;
    int perunit=2;
    int firstunits=100;
    int otherunits=3;
    int totalbill=firstunits*perunit+(totalunits-firstunits)*otherunits;
    cout<<"total bill is:"<<totalbill;
    return 0;
    
}
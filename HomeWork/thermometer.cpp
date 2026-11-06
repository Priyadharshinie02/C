#include<iostream>
using namespace std;
int main()
{
    int thermotercelsius=37;
    int fahrenheight=(thermotercelsius*9/5)+32;
    float fahrenheight1=float(thermotercelsius*9/5)+32;
    cout<<"int fahrenheight is:"<<fahrenheight<<endl;
    cout<<"float fahrenheight is:"<<fahrenheight1<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int fixedprice = 50;
    int kilometers=15;
    int rateperkilometer=12;
    int totalfare=fixedprice+(kilometers*rateperkilometer);
    cout << "Total fare: " << totalfare << endl;
    return 0;
    
}
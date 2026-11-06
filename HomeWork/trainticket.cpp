#include<iostream>
using namespace std;
int main()
{
    int trainticketadult=450;
    int trainticketchild=225;
    int numberofadult=3;
    int numberofchild=2;
    int totalfare=(trainticketadult*numberofadult)+(trainticketchild*numberofchild);
    cout << "Total fare: " << totalfare << endl;
    return 0;
}
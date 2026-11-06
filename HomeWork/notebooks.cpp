#include<iostream>
using namespace std;
int main()
{
    int notebooks= 40;
    int buysatrupees=18;
    int sellsnotebooks=25;
    int totalcost=notebooks*buysatrupees;
    int totalsellingprice=sellsnotebooks*25;
    int profit=totalsellingprice-totalcost;
    cout << "Total cost: " << totalcost << endl;
    cout << "Total selling price: " << totalsellingprice << endl;
    cout << "Profit: " << profit << endl;
    return 0;
}
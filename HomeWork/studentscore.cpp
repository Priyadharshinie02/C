#include<iostream>
using namespace std;
int main()
{
    int math=82;
    int science=91;
    int english=77;
    int avg1=(math+science+english)/3;
    float avg=(math+science+english)/3.0;
    cout << "Average (integer): " << avg1 << endl;
    cout << "Average (float): " << avg << endl;
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int students = 1250;
    int buscapacity = 45;

    int full_buses = students / buscapacity;
    int students_left = students % buscapacity;

    cout << "Full buses = " << full_buses << endl;
    cout << "Students left = " << students_left << endl;

    return 0;
}

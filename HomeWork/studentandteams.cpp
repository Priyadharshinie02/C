#include <iostream>
using namespace std;

int main() {
    int students = 85;
    int teamSize = 6;
    int fullTeams = students / teamSize;
    int remainingStudents = students % teamSize;
    cout << "Full teams: " << fullTeams << endl;
    cout << "Students left over: " << remainingStudents;
    return 0;
}
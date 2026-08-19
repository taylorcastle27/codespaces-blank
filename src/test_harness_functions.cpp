#include <iostream>
#include <cassert>
using namespace std;

// Function converts hrs/min to min for a learning-purpose test harness
int HrMinToMinLearning(int origHours, int origMinutes) {
    int totMinutes = (origHours * 60) + origMinutes;
    return totMinutes;
}

int main() {
    cout << "Testing started" << endl;

    assert(HrMinToMinLearning(0, 0) == 0);
    assert(HrMinToMinLearning(0, 1) == 1);
    assert(HrMinToMinLearning(0, 99) == 99);
    assert(HrMinToMinLearning(1, 0) == 60);
    assert(HrMinToMinLearning(5, 0) == 300);
    assert(HrMinToMinLearning(2, 30) == 150);

    cout << "Testing completed" << endl;
    return 0;
}
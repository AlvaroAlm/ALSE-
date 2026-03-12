#include <iostream>
using namespace std;

// LeetCode 1603: Design Parking System
class ParkingSystem {
private:
    int spaces[4]; // index 1=big, 2=medium, 3=small

public:
    ParkingSystem(int big, int medium, int small) {
        spaces[1] = big;
        spaces[2] = medium;
        spaces[3] = small;
    }

    bool addCar(int carType) {
        if (spaces[carType] > 0) {
            spaces[carType]--;
            return true;
        }
        return false;
    }
};

int main() {
    cout << "=== LeetCode 1603: Design Parking System ===" << endl;
    cout << "ParkingSystem(1, 1, 0)" << endl;
    ParkingSystem ps(1, 1, 0);

    cout << "addCar(1) -> " << (ps.addCar(1) ? "true" : "false") << " (expected: true)" << endl;
    cout << "addCar(2) -> " << (ps.addCar(2) ? "true" : "false") << " (expected: true)" << endl;
    cout << "addCar(3) -> " << (ps.addCar(3) ? "true" : "false") << " (expected: false)" << endl;
    cout << "addCar(1) -> " << (ps.addCar(1) ? "true" : "false") << " (expected: false)" << endl;

    cout << "\n--- Test 2 ---" << endl;
    ParkingSystem ps2(3, 2, 1);
    cout << "ParkingSystem(3, 2, 1)" << endl;
    cout << "addCar(1) -> " << (ps2.addCar(1) ? "true" : "false") << endl;
    cout << "addCar(1) -> " << (ps2.addCar(1) ? "true" : "false") << endl;
    cout << "addCar(1) -> " << (ps2.addCar(1) ? "true" : "false") << endl;
    cout << "addCar(1) -> " << (ps2.addCar(1) ? "true" : "false") << " (no space)" << endl;

    return 0;
}

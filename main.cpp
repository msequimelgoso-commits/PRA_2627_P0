#include <iostream>
#include "BrazoRobot.h"

using namespace std;

int main() {
    RoboticArm arm(0, 0, 0);

    cout << "Posicion inicial: (" << arm.getX() << ", "
         << arm.getY() << ", " << arm.getZ() << ")" << endl;

    arm.move(1.5, 2.0, 3.0);
    cout << "Tras mover: (" << arm.getX() << ", "
         << arm.getY() << ", " << arm.getZ() << ")" << endl;

    arm.grab();
    cout << "Sujetando objeto: " << (arm.isHolding() ? "si" : "no") << endl;

    arm.release();
    cout << "Sujetando objeto: " << (arm.isHolding() ? "si" : "no") << endl;

    return 0;
}

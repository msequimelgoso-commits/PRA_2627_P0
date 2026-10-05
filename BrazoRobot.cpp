#include "BrazoRobot.h"

RoboticArm::RoboticArm(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
    holding = false;
}

double RoboticArm::getX() const { return x; }
double RoboticArm::getY() const { return y; }
double RoboticArm::getZ() const { return z; }
bool RoboticArm::isHolding() const { return holding; }

void RoboticArm::grab() { holding = true; }
void RoboticArm::release() { holding = false; }

void RoboticArm::move(double dx, double dy, double dz) {
    x += dx;
    y += dy;
    z += dz;
}

#ifndef BRAZOROBOT_H
#define BRAZOROBOT_H

class RoboticArm {
private:
    double x;
    double y;
    double z;
    bool holding;

public:
    // Constructor
    RoboticArm(double x = 0.0, double y = 0.0, double z = 0.0);

    // Consultores
    double getX() const;
    double getY() const;
    double getZ() const;
    bool isHolding() const;

    // Operaciones
    void grab();
    void release();
    void move(double dx, double dy, double dz);
};

#endif

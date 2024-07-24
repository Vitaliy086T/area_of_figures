#ifndef CIRCLE_H
#define CIRCLE_H

#include "../class_Figures/Figures.h"

class Circle : public Figures {
public:
    Circle(double r);
    double area() override;

private:
    double radius;
};

#endif // CIRCLE_H

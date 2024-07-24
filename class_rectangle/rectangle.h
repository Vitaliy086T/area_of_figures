#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "../class_Figures/Figures.h"

class Rectangle : public Figures {
public:
    Rectangle(double w, double h);
    double area() override;

private:
    double width;
    double height;
};

#endif // RECTANGLE_H

//
// Created by nina on 7/30/25.
//

#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"


class Circle : Shape {
protected:
    double radius;
    double circumference;
    double area;

public:

    Circle();
    ~Circle();

    void setName(std::string name);
    void setRadius(double radius);
    void setCircumference(double circumference);
    void setArea(double area);

    std::string getName();
    double getRadius();
    double getCircumference();
    double getArea();

    void enterDetails();
    void printDetails();

};



#endif //CIRCLE_H

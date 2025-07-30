#include "Circle.h"
#include <iostream>

Circle::Circle() {
    std::cout << "Constructor circle" << std::endl;
}
Circle::~Circle() {
    std::cout << "Destructor circle" << std::endl;
}

void Circle::setName(std::string name) {
    Shape::setName(name);
}
void Circle::setRadius(double radius) {
    this->radius = radius;
}
void Circle::setCircumference(double circumference) {
    this->circumference = circumference;
}
void Circle::setArea(double area) {
    this->area = area;
}

std::string Circle::getName() {
    return Shape::getName();
}
double Circle::getRadius() {
    return radius;
}
double Circle::getCircumference() {
    return circumference;
}
double Circle::getArea() {
    return area;
}

void Circle::enterDetails() {
    Shape::enterDetails();
    std::cout << "Enter radius: " << std::endl;
    std::cin >> radius;
    std::cout << "Enter circumference: " << std::endl;
    std::cin >> circumference;
    std::cout << "Enter area: " << std::endl;
    std::cin >> area;
}
void Circle::printDetails() {
    Shape::printDetails();
    std::cout << "Radius: " << radius << std::endl;
    std::cout << "Circumference: " << circumference << std::endl;
    std::cout << "Area: " << area << std::endl;
}
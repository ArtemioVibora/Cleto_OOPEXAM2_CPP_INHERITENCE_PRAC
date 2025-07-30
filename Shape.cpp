#include "Shape.h"
#include <iostream>

Shape::Shape() {
    std::cout << "Shape constructor called" << std::endl;
    //Maybe implement some default value here!
}

Shape::~Shape() {
    std::cout << "Shape destructor called" << std::endl;
}

void Shape::enterDetails() {
    std::cout << "Enter name of shape: ";
    std::cin >> name;
}

void Shape::printDetails() {
    std::cout << "Name: " << name << std::endl;
}


void Shape::setName(std::string name) {
    this->name = name;
}

std::string Shape::getName() {
    return name;
}

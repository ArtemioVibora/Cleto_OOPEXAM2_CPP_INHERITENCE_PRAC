#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {
    protected:
    std::string name;

    public:

    Shape();
    ~Shape();

    void enterDetails();
    void printDetails();
    void setName(std::string name);
    std::string getName();
};



#endif //SHAPE_H

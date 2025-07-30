#include <iostream>

using namespace std;

//Simple implementation of class

//Class A would take a number and add it to another number
class A {
private:
    int x;
    int y;

public:
    //Two constructors would be built -- pun intended
    A() : x(0), y(0) {
        cout << "First Constructor of A with the initialization of 0 to both x and y had been called" << endl;
    }
    A(int x, int y) : x(x), y(y) {
        cout << "Second Constructor of A waiting for arguments to pass through its parameters" << endl;
    }

    void enterNumbers() {
        cout << "Enter x: ";
        cin >> x;
        cout << "Enter y: ";
        cin >> y;
    }
    //Declaring this const because it just prints data bruh
    void print() const {
        cout << "The sum is: " << x + y << endl;
    }

};

int main() {
    A a1(2, 2);
    A a2;

    a2.enterNumbers();
    a1.print();
    a2.print();
}
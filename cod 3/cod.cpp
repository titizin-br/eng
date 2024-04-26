/*Prefira Composição a Herança - código bom*/

#include <iostream>

class Base {
public:
    int x;
};

class Derived {
public:
    Base base; 
    int y;

    void print() {
        std::cout << "x: " << base.x << ", y: " << y << std::endl;
    }
};

int main() {
    Derived obj;

    obj.base.x = 10;
    obj.y = 20;

    obj.print();

    return 0;
}
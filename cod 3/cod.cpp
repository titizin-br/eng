/*Prefira Composição a Herança - código ruim*/

#include <iostream>

class Base {
public:
    int x;
};

class Derived : public Base {
public:
    int y;
    
    void print() {
        std::cout << "x: " << x << ", y: " << y << std::endl;
    }
};

int main() {
    Derived obj;

    obj.x = 10;
    obj.y = 20;

    obj.print();
    
    return 0;
}
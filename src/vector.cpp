#include "vector.h"

vector::vector() { // Assuming two dimensional vectors initilized to 0
    int x = 0;
    int y = 0;
}

void vector::setVector(int newX, int newY) {
    x = newX;
    y = newY;
}

int vector::getX() {
    return x;
}

int vector::getY() {
    return y;
}

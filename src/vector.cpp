#include "vector.h"

vector::vector() { // Assuming two dimensional vectors initilized to 0
    x = 0;
    y = 0;
}

vector::vector(int newX, int newY) {
    x = newX;
    y = newY;
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

vector vector::operator+(const vector& addend) {
    int sumX = this->x + addend.x;
    int sumY = this->y + addend.y;
    vector sum(sumX, sumY);
    return sum;
}

vector vector::operator-(const vector& subtractend) {
    int diffX = this->x - subtractend.x;
    int diffY = this->y - subtractend.y;
    vector diff(diffX, diffY);
    return diff;
}

vector vector::operator*(const int factor) {
    int productX = this->x * factor;
    int productY = this->y * factor;
    vector product(productX, productY);
    return product;
}

vector vector::operator*(vector& factor) {
    int productX = this->x * factor.x;
    int productY = this->y * factor.y;
    vector product(productX, productY);
    return product;
}
vector vector::operator/(const int divisor) {
    int dividendX = this->x / divisor;
    int dividendY = this->y / divisor;
    vector dividend(dividendX, dividendY);
    return dividend;
}

vector vector::operator/(vector& divisor) {
    int dividendX = this->x / divisor.x;
    int dividendY = this->y / divisor.y;
    vector dividend(dividendX, dividendY);
    return dividend;
}

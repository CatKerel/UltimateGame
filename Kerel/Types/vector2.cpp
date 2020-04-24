#include <iostream>
#include <cmath>
#include "vector2.h"

using namespace std;

double vector2::getX() const {
    return x;
}

double vector2::getY() const {
    return y;
}

void vector2::setX(double _x) {
    x = _x;
}

void vector2::setY(double _y) {
    y = _y;
}

void vector2::rotate(double angle) {
    angle = angle * 3.14 / 180;
    double _x = getX(), _y = getY();
    setX(_x * cos(angle) + _y * sin(angle));
    setY(-_x * sin(angle) + _y * cos(angle));
}

vector2 & vector2::operator=(const vector2 &v) {
    x = v.getX();
    y = v.getY();
    return (*this);
}

bool vector2::operator==(const vector2 &v2) const {
    return getX() == v2.getX() && getY() == v2.getY();
}

bool vector2::operator!=(const vector2 &v2) const {
    return !(*this == v2);
}

vector2 vector2::operator+(const vector2 &v2) const {
    return vector2(getX() + v2.getX(), getY() + v2.getY());
}

vector2 vector2::operator-(const vector2 &v2) const {
    return vector2(getX() - v2.getX(), getY() - v2.getY());
}

vector2 vector2::operator*(const double a) const {
    return vector2(getX() * a, getY() * a);
}

double vector2::operator*(const vector2 &v2) const {
    return getX() * v2.getX() + getY() * v2.getY();
}

vector2 operator*(double a, const vector2 &v) {
    return v * a;
}

ostream &operator<<(ostream &os, const vector2 &v) {
    os << '(' << v.getX() << "; " << v.getY() << ')';
    return os;
}

istream &operator>>(istream &is, vector2 &v) {
    double _x, _y;
    is >> _x >> _y;
    v.setX(_x);
    v.setY(_y);
    return is;
}
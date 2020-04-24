#include <iostream>
#include <cmath>
#include "vector3.h"

using namespace std;

double vector3::getX() const {
    return x;
}

double vector3::getY() const {
    return y;
}

double vector3::getZ() const {
    return z;
}

void vector3::setX(double _x) {
    x = _x;
}

void vector3::setY(double _y) {
    y = _y;
}

void vector3::setZ(double _z) {
    z = _z;
}

void vector3::rotateX(double angle) {
    angle = angle * 3.14 / 180;
    double _y = getY(), _z = getZ();
    setY(_y * cos(angle) + _z * sin(angle));
    setZ(-_y * sin(angle) + _z * cos(angle));
}

void vector3::rotateY(double angle) {
    angle = angle * 3.14 / 180;
    double _z = getZ(), _x = getX();
    setZ(_z * cos(angle) + _x * sin(angle));
    setX(-_z * sin(angle) + _x * cos(angle));
}

void vector3::rotateZ(double angle) {
    angle = angle * 3.14 / 180;
    double _x = getX(), _y = getY();
    setX(_x * cos(angle) + _y * sin(angle));
    setY(-_x * sin(angle) + _y * cos(angle));
}

vector3 vector3::operator=(const vector3 &V) {
    x = V.getX();
    y = V.getY();
    z = V.getZ();
    return (*this);
}

bool vector3::operator==(const vector3 &v2) const {
    return x == v2.getX() && y == v2.getY();
}

bool vector3::operator!=(const vector3 &v2) const {
    return !(*this == v2);
}

vector3 vector3::operator+(const vector3 &v2) const {
    return vector3(getX() + v2.getX(), getY() + v2.getY(), getZ() + v2.getZ());
}

vector3 vector3::operator-(const vector3 &v2) const {
    return vector3(getX() - v2.getX(), getY() - v2.getY(), getZ() - v2.getZ());
}

vector3 vector3::operator*(const double a) const {
    return vector3(getX() * a, getY() * a, getZ() * a);
}

double vector3::operator*(const vector3 &v2) const {
    return getX() * v2.getX() + getY() * v2.getY() + getZ() * v2.getZ();
}

vector3 operator*(double a, const vector3 &v) {
    return v * a;
}

ostream &operator<<(ostream &os, const vector3 &v) {
    os << '(' << v.getX() << "; " << v.getY() << "; " << v.getZ() << ')';
    return os;
}

istream &operator>>(istream &is, vector3 &v) {
    double _x, _y, _z;
    is >> _x >> _y >> _z;
    v.setX(_x);
    v.setY(_y);
    v.setZ(_z);
    return is;
}
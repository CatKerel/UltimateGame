#pragma once
#include <iostream>

class vector2 {
public:
    vector2() : x(0), y(0) {}

    vector2(double _x, double _y) : x(_x), y(_y) {}

    double getX() const;

    double getY() const;

    void setX(double _x);

    void setY(double _y);

    void rotate(double angle); //Поворачивает веткор на угол angle, заданный в градусах

    vector2& operator=(const vector2 &v);

    bool operator==(const vector2 &v2) const;

    bool operator!=(const vector2 &v2) const;

    vector2 operator+(const vector2 &v2) const;

    vector2 operator-(const vector2 &v2) const;

    vector2 operator*(const double a) const;

    double operator*(const vector2 &v2) const; //Скалярное произведение векторов

private:
    double x, y;
};

vector2 operator*(double a, const vector2 &v);

std::ostream &operator<<(std::ostream &os, const vector2 &v);

std::istream &operator>>(std::istream &is, vector2 &v);

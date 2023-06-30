#pragma once
#include <iostream>
#include <istream>
#include <fstream>
#include <string>
using namespace std;

class vector{
private:
    double x, y, z;
public:
    vector()
    {
        x = 1;
        y = 2;
        z = 3;
    }
    vector(double a, double b, double c):x(a), y(b), z(c){}
    double getX() const;
    double getY() const;
    double getZ() const;
    void setX(double tempX);
    void setY(double tempY);
    void setZ(double tempZ);
    double vector_length();
    vector operator+(vector) const;
    double operator*(vector) const;
    void print();
};


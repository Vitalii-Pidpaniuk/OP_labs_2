#include <iostream>
#include <istream>
#include <fstream>
#include <string>
#include <cmath>
#include "vectors.h"
using namespace std;

double vector::getX() const {
    return x;
}

double vector::getY() const {
    return y;
}

double vector::getZ() const {
    return z;
}

void vector::setX(double tempX) {
    x = tempX;
}
void vector::setY(double tempY) {
    y = tempY;
}
void vector::setZ(double tempZ) {
    z = tempZ;
}

double vector::vector_length() {
    double length;
    //length = sqrt(pow(obj.x,2) + pow(obj.y,2) + pow(obj.z,2));
    length = sqrt(pow(x,2) + pow(y,2) + pow(z,2));
    return length;
}
vector vector::operator+(vector obj) const {
    vector temp{0, 0, 0};
    temp.x = x + obj.x;
    temp.y = y + obj.y;
    temp.z = z + obj.z;
    return temp;
}

double vector::operator*(vector obj) const {
    double temp = 0;
    temp += obj.x*x + obj.y*y + obj.z*z;
    return temp;
}

void vector::print()
{
    cout<<"x: "<<x<<", y: "<<y<<", z: "<<z<<endl;
}
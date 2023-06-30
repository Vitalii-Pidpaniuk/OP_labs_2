#ifndef INEQUALITY_H
#define INEQUALITY_H

#include<iostream>
#include <cmath>
#include "mainwindow.h"
using namespace std;

class Error1
{
    int m;
    QString error_text = "Devide by zero\n";
public:
    Error1(int x) : m(x){}
    virtual QString message()
    {
        return error_text;
    }


};

class Error2
{
    int m;
    QString error_text = "Devide by infinity\n";
public:
    Error2(int x) : m(x){}
    virtual QString message()
    {
        return error_text;
    }

};

class equality
{
    double x;
public:
    equality(int a)
    {
        if((a - 2)==0)
        {
            throw Error1(a);
        }
        else
        {
            if(abs(a)>=2000000)
            {
                throw Error2(a);
            }
            else
            {
                x = a;
            }
        }
    }
    double solve(double a)
    {
        x = a;
        double y = abs((abs(x-2)+1)/(x-2));
        return y;
    }
};

void main_program();
#endif // INEQUALITY_H

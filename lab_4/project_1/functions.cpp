#pragma once
#include <iostream>
#include <istream>
#include <fstream>
#include <string>
#include "functions.h"
using namespace std;

void capture_1(){

    vector V1 = vector_1_creat();
    vector V2 = vector_2_creat();
    cout<<"**********************\nVector 1: ";
    V1.print();
    cout<<"**********************\nVector 2: ";
    V2.print();
    cout<<"**********************\nVector 3: ";
    vector V3 = V1 + V2;
    V3.print();
    double multiply = V1 * V3;
    cout<<"**********************\n"<<"Vectors multiplication = "<<multiply<<"\nLength: "<<V3.vector_length();


}

vector vector_1_creat()
{
    double x = 0, y = 0, z = 0;
    cout<<"Creating the first vector ""V1""...\nEnter value of x: \n";
    x = num_enter();
    cout<<"Enter value of y: \n";
    y = num_enter();
    cout<<"Enter value of z: \n";
    z = num_enter();
    vector V1 = vector(x, y, z);
    cout<<"Vector V1 created.\n";
    return V1;
}

vector vector_2_creat()
{
    vector V2;
    double x = 0, y = 0, z = 0;
    cout<<"Creating the second vector ""V2""...\nEnter value of x: \n";
    x = num_enter();
    cout<<"Enter value of y: \n";
    y = num_enter();
    cout<<"Enter value of z: \n";
    z = num_enter();
    V2.setX(x);
    V2.setY(y);
    V2.setZ(z);
    cout<<"Vector V2 created.\n";
    return V2;
}

double num_enter()
{
    double num;
    cin>>num;
    return num;
}
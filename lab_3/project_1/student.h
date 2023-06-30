#pragma once
#include <iostream>
#include <istream>
#include <fstream>
#include <string>
//#include "student.cpp"
using namespace std;


class Data{
private:
    int day;
    int month;
    int year;
public:
    //Data();
    void setDay(int valueDay);
    void setMonth(int valueMonth);
    void setYear(int valueYear);
    int getDay() const;
    int getMonth() const;
    int getYear() const;


};

class student
{
private:
    string name;
    int group_num;
    Data birthday;
public:
    //student(string& value_name, Data value_birthday, int value_group_num);
    void setName(string valueName);
    void setGroup_num(const int);
    void setData(Data valueBirthday);
    string getName();
    int getGroup_num() const;
    Data getBirthday();
};

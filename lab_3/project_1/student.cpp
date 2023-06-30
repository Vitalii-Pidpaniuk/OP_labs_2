#include <iostream>
#include <istream>
#include <fstream>
#include <string>
#include <utility>
#include "student.h"
//#include "functions.h"

using namespace std;


void student::setName(string valueName) {
    name = valueName;
}

void student::setGroup_num(const int valueGroup_num) {
    group_num = valueGroup_num;
}

void student::setData(Data valueBirthday) {
    birthday = valueBirthday;
}

string student::getName() {
    return name;
}

int student::getGroup_num() const {
    return group_num;
}

Data student::getBirthday() {
    return birthday;
}

void Data::setDay(int valueDay) {
    day = valueDay;
}

void Data::setMonth(int valueMonth) {
    month = valueMonth;
}

void Data::setYear(int valueYear) {
    year = valueYear;
}

int Data::getDay() const
{
    return day;
}
int Data::getMonth() const
{
    return month;
}
int Data::getYear() const
{
    return year;
}


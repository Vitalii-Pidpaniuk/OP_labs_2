#pragma once
#include <iostream>
#include <istream>
#include <fstream>
#include <string>
#include "student.h"
using namespace std;
int students_quantity();
string getName();
student* array_create(int students_q);
void array_delete(student* arr);
void array_write(student* array, int size);
void array_read(student* array, int size);
int day_check(int month, int year);
int month_check();
int year_check();
void oldest_search(student* array, int size);
int group_choose();
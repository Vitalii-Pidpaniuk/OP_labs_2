#include <iostream>
#include "product.h"
#include <ctime>

double product::summary_price_check()
{
    return amount * price;
}

int Data::get_day() const {return day;}
int Data::get_month() const {return month;}
int Data::get_year() const {return year;}

Data product::time_since_made()
{
    Data time_since_made;
    Data current_data = Data::push_current_data();
    time_since_made = current_data - date_of_manufacture;
    return time_since_made;
}

Data Data::operator-(Data temp_data) const
{
    Data push_data;
    push_data.day = day - temp_data.day;
    push_data.month = month - temp_data.month;
    push_data.year = year - temp_data.year;
    return push_data;
}

bool Data::operator<(Data temp_data) const
{
    bool result;
    Data push_data = push_current_data();
    if((push_data.day + push_data.month*30 + push_data.year*365)>(day + month*30 + year*365))
    {
        return true;
    }
    else
    {
        return false;
    }
}


Data Data::push_current_data()
{
    time_t currentTime = time(nullptr);

    // Перетворити час в локальну структуру часу
    tm* localTime = localtime(&currentTime);

    // Отримати дату зі структури часу
    int t_year = localTime->tm_year + 1900; // Додати 1900 до отриманого значення
    int t_month = localTime->tm_mon + 1; // Додати 1 до отриманого значення (місяці відлічуються з 0)
    int t_day = localTime->tm_mday;
    Data current_data(t_day, t_month, t_year);
    return current_data;
}
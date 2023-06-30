#pragma once
#include <iostream>

using namespace std;


class Data {
    int day,
        month,
        year;
public:
    int get_day() const;
    int get_month() const;
    int get_year() const;
    Data(): day(0), month(0), year(0) {} //конструктор за замовчуванням
    static Data push_current_data(); //метод виклику поточної дати
    Data(int temp_day, int temp_month, int temp_year) : day(temp_day), month(temp_month), year(temp_year){} //список ініціалізації для об'єкта типу дата
    Data operator-(Data) const; //перевантаження оператора "-" для об'єктів типу дата
    bool operator<(Data) const;
};


class product {
protected:
    string name;
    Data date_of_manufacture;
    double price;
    int amount;

public:
    //product& operator=(const product other);
    virtual double summary_price_check();
    Data time_since_made();
    product(string &t_name, Data t_date_of_manufacture, double t_price, int t_amount):name(t_name),
                                                                                     date_of_manufacture(t_date_of_manufacture),
                                                                                     price(t_price),
                                                                                     amount(t_amount){}
    product()
    {
        name = "empty";
        date_of_manufacture = Data(0, 0, 0);
        price = 0;
        amount = 0;
    }
};
#include "function.h"
#include "industrial_product.h"

void clear_memory(product** arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        delete arr[i];
    }
    delete[] arr;
}

product** array_creation(int n, char ch, double &total_price)
{
    auto** arr = new product*[n];
    for(int i = 0; i < n; i++)
    {
        product base_info = product_creation();
        if(ch =='0')
        {
            Data exp_date = enter_exp_date();
            arr[i] = new grocery_product(base_info, exp_date);
            total_price += arr[i]->summary_price_check();
        }
        if(ch =='1')
        {
            string transport = enter_transport();
            string storage = enter_storage();
            arr[i] = new industrial_product(base_info, transport, storage);
            total_price+=arr[i]->summary_price_check();
        }
    }
    return arr;
}

product product_creation()
{
    int base_day, base_month, base_year;
    string base_name;
    cout<<"Enter product`s name:\n";
    cin>>base_name;
    cout<<"Enter the date of manufacture in format dd mm yyyy:\n";
    cin>>base_day>>base_month>>base_year;
    Data base_date_of_manufacture(base_day, base_month, base_year);
    double base_price;
    cout<<"Enter product`s price (per unit):\n";
    cin>>base_price;
    int base_amount;
    cout<<"Enter amount of product\n";
    cin>>base_amount;
    product base_product(base_name, base_date_of_manufacture, base_price,base_amount);
    return base_product;
}


Data enter_exp_date()
{
    int day, month, year;
    cout<<"Enter the expiration date in format dd mm yyyy\n";
    cin>>day>>month>>year;
    Data expiration_date(day, month, year);
    return expiration_date;
}

string enter_transport()
{
    string transporting;
    char ch;
    cout<<"Choose type of transporting:\n(0) by cargo van\n(1) by plane\n(2) by train\n(3) by ship\n";
    cin>>ch;
    if(ch == '0')
    {
        transporting = "Cargo van";
    }
    if(ch == '1')
    {
        transporting = "Plane";
    }
    if(ch == '2')
    {
        transporting = "Train";
    }
    if(ch == '3')
    {
        transporting = "Ship";
    }
    ch = '\0';
    return transporting;
}

string enter_storage()
{
    string storage;
    char ch;
    cout<<"Choose storage\n(0)-warehouse\n(1)-hall"<<endl;
    cin>>ch;
    if(ch=='0')
    {
        storage = "warehouse";
    }
    if(ch == '1')
    {
        storage = "hall";
    }
    return storage;
}
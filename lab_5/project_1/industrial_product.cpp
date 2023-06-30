#include "industrial_product.h"

double industrial_product::summary_price_check()
{
    double total_price = 0;
    string temp = "warehouse"; //string check
    if(storage==temp)
    {
        total_price = price * amount;
    }
    else
    {
        cout<<"Product is not in the warehouse"<<endl;
    }
    return total_price;
}

void industrial_product::set_transport(string &t_transport)
{
    transportation = t_transport;
}

void industrial_product::set_storage(string &t_storage)
{
    storage = t_storage;
}
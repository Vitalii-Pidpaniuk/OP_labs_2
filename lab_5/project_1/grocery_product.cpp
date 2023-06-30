#include "grocery_product.h"

double grocery_product::summary_price_check()
{
    double total_price = 0;
    Data time_made = time_since_made();
    if(expiration_date < time_made)
    {
        total_price = amount * price;
    }
    return total_price;
    //return 1;
}


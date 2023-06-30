#pragma once
#include "product.h"

class grocery_product:public product{
private:
    Data expiration_date;
public:
    double summary_price_check() override;
    grocery_product(product &base_product, Data t_expiration_data) : product(base_product), expiration_date(t_expiration_data){}

};


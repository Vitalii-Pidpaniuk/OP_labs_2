#pragma once
#include "product.h"

class industrial_product:public product {
private:
    string transportation;
    string storage;

public:
    double summary_price_check() override;
    industrial_product(product &base_product, string &t_transportation, string &t_storage) :product(base_product),
                                                                                            transportation(t_transportation),
                                                                                            storage(t_storage){}
    void set_transport(string &t_transport);
    void set_storage(string &t_storage);
};

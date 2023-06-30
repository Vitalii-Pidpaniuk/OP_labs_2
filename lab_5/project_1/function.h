#pragma once
#include <iostream>
#include "product.h"
#include "grocery_product.h"
#include "industrial_product.h"

product** array_creation(int n, char ch, double&);
void clear_memory(product** arr, int n);
product product_creation();
grocery_product create_grocery(product);
industrial_product create_industrial(product);
Data enter_exp_date();
string enter_transport();
string enter_storage();
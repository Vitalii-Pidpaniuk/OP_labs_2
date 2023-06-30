#include <iostream>
#include "product.h"
#include "function.h"
using namespace std;


int main() {
    double total_gr_price = 0, total_ind_price = 0;
    int n, m;
    cout<<"Enter quantity of industrial products"<<endl;
    cin>>n;
    cout<<"Enter quantity of grocery products"<<endl;
    cin>>m;
    cout<<"Creating of industrial products..."<<endl;
    product** ind_array = array_creation(n, '1', total_ind_price);
    cout<<"Creating of grocery products..."<<endl;
    product** gr_array = array_creation(m, '0', total_gr_price);
    clear_memory(ind_array, n);
    clear_memory(gr_array, m);
    cout<<"Total price of overdue products equals "<<total_gr_price<<endl;
    cout<<"Total price of industrial products in warehouse equals "<<total_ind_price<<endl;
    return 0;
}

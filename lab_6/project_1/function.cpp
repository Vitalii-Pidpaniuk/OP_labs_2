#include "function.h"
//#include "multiset.h"

void type_choose() {
    int chosen_type = 0;

    cout << "Enter 1 for creating a multiset of int numbers, 2 for double, or 3 for char: ";
    cin >> chosen_type;

    if (chosen_type == 1) {

        MultiSet<int> mySet;
        program(mySet);

    }

    else if (chosen_type == 2) {

        MultiSet<double> mySet;
        program(mySet);

    }

    else {

        MultiSet<char> mySet;
        program(mySet);

    }

}

template <typename T>
void program(MultiSet<T>& mySet)
{
    T insert;
    MultiSet<T> newSet;
    int start_quantity;
    cout<<"Enter start quantity of elements:\n";
    cin>>start_quantity;
    cout<<"Enter elements:";
    for(int i = 0; i < start_quantity; i++)
    {
        cin>>insert;
        mySet.insert(insert);
    }
    cout<<"Add new element:\n";
    cin>>insert;
    mySet.insert(insert);
    cout<<"Create new multiset to merge old and new\n";
    cout<<"Enter start quantity of elements:\n";
    cin>>start_quantity;
    cout<<"Enter elements:";
    for(int i = 0; i < start_quantity; i++)
    {
        cin>>insert;
        newSet.insert(insert);
    }
    mySet.merge(newSet);
    cout<<"Merge success\n";
    newSet.clear();

    typename MultiSet<T>::Iterator iterator = mySet.getIterator();
    iterator.begin();

    cout << "-------------------------------------" << endl;

    while (!iterator.end()) {
        cout << iterator.value() << " ";
        iterator.next();
    }

    cout << endl << "-------------------------------------" << endl;
    mySet.clear();
}
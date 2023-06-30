#include "C_style.h"
#include <iostream>
#include <stdio.h>
#include "sequence_search.h"
using namespace std;

void main_capture_c()
{
    cout<<"You use c style\n";
    //file_write_c();
    file_read_c();
}

void file_write_c()
{
    cout<<"Your text:\n";
    FILE* filePointer;
    filePointer = fopen("input.txt", "w");
    int size = 0;
    char* dynamicArray = new char [size];
    char element;
    int newQuantity = 4;
    int quantity=newQuantity;
    while (/*cin >> element*/ cin.get(element) && element != '^')
    {
        if (size >= quantity)
        {
            quantity += 1;
            char* newDynamicArray = new char[quantity];
            copy(dynamicArray, dynamicArray + size, newDynamicArray);
            delete[] dynamicArray;
            dynamicArray = newDynamicArray;
        }
        if(element != '^')
        {
            dynamicArray[size] = element;
            size++;
        }
    }
    fprintf(filePointer, "%s", dynamicArray);
    cout<<"Array:\n";
    for (int i = 0; i < size; i++) {
        cout << dynamicArray[i];
    }
    cout << std::endl;
    delete[] dynamicArray;
    fclose(filePointer);
}

void file_read_c()
{
    FILE* filePointer;
    char fileName[] = "input.txt";
    char character;
    char text[1000];

    filePointer = fopen(fileName, "r");
    if (filePointer == nullptr) {
        std::cout << "File can not be opened!\n";
    }
    else
    {
        cout << "File containing: \n";
        int i = 0;
        while ((character = fgetc(filePointer))&& character != EOF) {
            cout << character;
            text[i]=character;
            i++;
        }
        //cout<<"*******************\nfile: "<<filePointer;
    }
    fclose(filePointer);
    cout<<"\n\n*******************************\n";
    cout<<"Changed text:\n";
    search_c(text);
}
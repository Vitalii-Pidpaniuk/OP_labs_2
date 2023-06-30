#include <iostream>
#include <string>
#include "C++_style.h"
#include "C_style.h"
using namespace std;
int main(int argc, char* argv[]) {
    string argument = argv[1];
    if(argument=="C_style")
    {
        main_capture_c();
    }
    if(argument=="Cpp_style")
    {
        main_capture_cpp();
    }
    cout<<"\nPress eny key to exit\n";
    getchar();
    return 0;
}

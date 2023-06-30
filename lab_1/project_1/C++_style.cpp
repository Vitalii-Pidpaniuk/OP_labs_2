
#include "C++_style.h"
#include "sequence_search.h"
#include <iostream>
#include <string>
#include <istream>
#include <fstream>
using namespace std;

void main_capture_cpp()
{
    cout<<"You use C++\n";
    file_write_cpp();
    cout<<"**********************************************";
    file_read_cpp();
}

void file_write_cpp()
{
    string iText;
    ofstream oFile("input.txt", ios_base::app);
    if (oFile.is_open())
    {
        do
        {
            getline(cin, iText);
            oFile << iText << '\n';
        } while (!iText.empty());
        oFile.close();
        cout << "Text has been saved in input.txt file." << endl;
    }
    else
    {
        cout << "Error: Unable to open file for writing." << endl;
    }
}

void file_read_cpp()
{
    string iText;
    string line;
    ifstream iFile("input.txt");
    if (!iFile.is_open())
        cout << "Error!\nFile does not exist.\n";
    else
    {
        iText = "";
        cout << "Text from input file:" << endl;
        while (!iFile.eof())
        {
            line = "";
            getline(iFile, line);
            iText += line + '\n';
        }
    }
    cout << iText;
    cout << "End of reading\n";
    cout <<"Changed text:\n";
    search_cpp(iText);
    iFile.close();
}

#include "sequence_search.h"
#include <iostream>
#include <cstring>
using namespace std;


void search_c(char* text) {
    int i = 0;
    char tmp_str[1000] = "";
    char longest_seq[1000] = "";
    char new_string[1000] = "";
    int tmp_index = 0;
    while (text[i] != '\0') {
        if (text[i] != '\n') {
            tmp_str[tmp_index++] = text[i];
        }
        else
        {
            tmp_str[tmp_index] = '\0';
            strcpy(longest_seq, line_check_c(tmp_str));
            if (longest_seq[0] == '\0')
            {
                strcpy(new_string, tmp_str);
            } else
            {
                strcpy(new_string, perform_c(tmp_str, longest_seq));
            }
            cout << new_string << endl;
            tmp_index = 0;
        }
        i++;
    }

}

char* line_check_c(char* line) {
    int i = 0, j = 0;
    char* sequence = new char[1000];
    //char sequence[1000] = "";
    for (int k = 0; k < 1000; k++) {
        sequence[k] = '\0';
    }
    char alt_sequence[1000] = "0";
    while (line[i] != '\0')
    {
        if (isdigit(line[i]) && line[i] > alt_sequence[j]) {
            alt_sequence[++j] = line[i];
            i++;
        } else if (isdigit(line[i]) && line[i] <= alt_sequence[j])
        {
            if (strlen(alt_sequence) > strlen(sequence))
            {
                strcpy(sequence, alt_sequence);
            }
            alt_sequence[0] = '\0';
            i++;
            j = 0;
        }
        else
        {
            if (strlen(alt_sequence) > strlen(sequence))
            {
                strcpy(sequence, alt_sequence);
            }
            alt_sequence[0] = '\0';
            i++;
            j = 0;
        }
    }
    return sequence;
}

char* perform_c(char* tmp_str, char* longest_seq) {
    char replacement[1000];
    for (int k = 0; k < strlen(longest_seq); k++) {
        replacement[k] = '*';
    }
    //replacement[strlen(longest_seq)] = '\0';
    char* new_str = new char[1000];
    strcpy(new_str, tmp_str);
    longest_seq[0] = ' ';
    char* ptr = strstr(new_str, longest_seq);
    if (ptr != nullptr) {
        strncpy(ptr, replacement, strlen(longest_seq));
    }
    strcat(new_str, " ");
    strcat(new_str, longest_seq);
    return new_str;
}




void search_cpp(string text) {
    int i = 0;
    string tmp_str, longest_seq, new_string;
    while (text[i] != '\0')
    {
        if (text[i] != '\n')
        {
            tmp_str += text[i];
        }
        else
        {
            longest_seq = line_check(tmp_str);
            if (longest_seq.empty())
            {
                new_string = tmp_str;
            }
            else
            {
                new_string = perform(tmp_str, longest_seq);
            }
            cout << new_string << endl;
            tmp_str.clear();
        }
        i++;
    }
}


string line_check(string line) {
    int i = 0, j = 0;
    string sequence, alt_sequence;
    alt_sequence[0]= '0';
    sequence = "";
    alt_sequence = "";
    while (line[i] != '\0')
    {
        if (isdigit(line[i]) && line[i] > alt_sequence[j])
        {
            alt_sequence += line[i];
            j++;
            i++;
        }
        else if (isdigit(line[i]) && line[i] <= alt_sequence[j])
        {
            if (alt_sequence.length() > sequence.length())
            {
                sequence = alt_sequence;
            }
            alt_sequence = "";
            i++;
            j = 0;
        }
        else
        {
            if (alt_sequence.length() > sequence.length())
            {
                sequence = alt_sequence;
            }
            alt_sequence = "";
            i++;
            j = 0;
        }
    }
    return sequence;
}


string perform(string tmp_str, string longest_seq) {
    string replacement(longest_seq.length(), '*');
    size_t i = tmp_str.find(longest_seq);
    tmp_str.replace(i, longest_seq.length(), replacement);
    tmp_str += " ";
    tmp_str += longest_seq;
    return tmp_str;
}
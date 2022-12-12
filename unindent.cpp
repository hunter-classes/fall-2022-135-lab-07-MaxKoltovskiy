#include <iostream>
#include "unindent.h"
#include <fstream>

// removes the first character if it is a space
std::string removeLeadingSpaces(std::string line)
{
    int index = 0;
    while( isspace(line[index])) {
        line = line.substr(1);
    }
    return line;
}

// loops the whole code until all leading spaces are removed
std::string unindent(std::string code)
{
    std::string result, line;
    int startmark = 0;
    for(int z=0; z< code.length(); z++){
        if(code[z] == '\n') {
            line = code.substr(startmark,(z-startmark));
            result += removeLeadingSpaces(line)+"\n";
            startmark = z + 1;
        }
    }

    return result;

}
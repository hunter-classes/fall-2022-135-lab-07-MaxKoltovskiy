#include <iostream>
#include "indent.h"

// counts how many times char c shows up in the line
int countChar(std::string line, char c)
{
    int count = 0;
    for(int i = 0; i< line.size(); i++) {
        if(line[i] == c) {
            count++;
        }
    }

    return count;
}

//for each opening curly brace, one extra indent, and each closing curly brace, one less indent
std::string indent(std::string code)
{
    std::string result, line;
    int startmark = 0, tabs = 0;
    for(int i=0; i< code.length(); i++){
        if(code[i] == '\n') {

            line = code.substr(startmark,(i-startmark));
            startmark = i + 1;

            tabs -= countChar(line, '}');

            for(int t = 0; t< tabs; t++) {
                result += '\t';
            }
            result += line +"\n";


            tabs += countChar(line, '{');

        }
    }

    return result;
}

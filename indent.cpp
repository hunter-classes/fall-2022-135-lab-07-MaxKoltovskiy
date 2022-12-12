#include <iostream>
#include "indent.h"

/* takes in a string and a character and then it loops 
through all the characters of the string to count the 
number of times each character of the string match the character
*/
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

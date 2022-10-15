#include <iostream>
#include <fstream>
#include "unindent.h"
#include "indent.h"

int main()
{
    std::string code, line;
    while( std::getline(std::cin, line)) {
        code +=  line+"\n";
    }
    
    std::cout<< "\n--------UNINDENTED----------\n";

    code = unindent(code);
    std::cout<< code;

    std::cout<< "\n----------INDENTED----------\n";
    
    code = indent(code);
    std::cout<< code;

}
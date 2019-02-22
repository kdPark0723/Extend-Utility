#include <iostream>

#include "preprocessor.h"

int main(int argc, char* argv[])
{
    std::cout << EXTUTIL_MK_STR(EXTUTIL_JOIN(test, Preprocessor))<< std::endl;
    
    return 0;
}
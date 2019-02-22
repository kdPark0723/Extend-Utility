#include <iostream>
#include <string>

#include "version.h"

int main(int argc, char* argv[])
{
    std::string version { EXTUTIL_VERSION_STRING };
    std::cout << "version: " << version << std::endl;
    
    return 0;
}
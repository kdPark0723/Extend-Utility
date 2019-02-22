#include <iostream>

#include "arguments.h"

int main(int argc, char* argv[])
{
    auto args = std::move(ext_util::arguments(argc, argv));

    for (auto&& arg : args)
        std::cout << arg << " ";
    std::cout << std::endl;
    
    return 0;
}
#include <iostream>
#include "arguments.hpp"

int main(int argc, char* argv[])
{
    auto args = ext_util::arguments(argc, argv);

    for (auto&& arg : args)
        std::cout << arg << " ";
    std::cout << std::endl;
    
    return 0;
}
#include "arguments.hpp"

namespace ext_util
{

std::vector<std::string> arguments(int argc, char* argv[])
{
    std::vector<std::string> res;
    for (int i = 0; i < argc; ++i)
        res.push_back(argv[i]);
    return res;
}

}
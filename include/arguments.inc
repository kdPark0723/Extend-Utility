#ifndef EXTUTIL_ARGUMENTS_INC_
#define EXTUTIL_ARGUMENTS_INC_

#include "arguments.h"

namespace ext_util
{

inline std::vector<std::string> arguments(int argc, char* argv[])
{
    std::vector<std::string> res;
    for (int i = 0; i < argc; ++i)
        res.push_back(argv[i]);
    return res;
}

}

#endif // !EXTUTIL_ARGUMENTS_INC_
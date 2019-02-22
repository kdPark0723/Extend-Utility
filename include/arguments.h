#ifndef EXTUTIL_ARGUMENTS_H_
#define EXTUTIL_ARGUMENTS_H_

#include <string>
#include <vector>

namespace ext_util
{

inline std::vector<std::string> arguments(int argc, char* argv[]);

}

#include "arguments.inc"

#endif // !EXTUTIL_ARGUMENTS_H_
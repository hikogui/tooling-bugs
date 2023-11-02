module;
#include <string>
#include <format>
export module B;
import A;

export struct bar {
    std::string test()
    {
        return std::format("{}", _v);
    }

    foo _v = {};
};

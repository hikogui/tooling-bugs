module;
#include <utility>
export module A;

export template<typename T>
struct foo {
    T test(auto x)
    {
        return {};
    }
};

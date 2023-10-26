module;
#include <string_view>
export module A;

export template<typename StringType>
struct foo {
    template<typename ArgA, typename ArgB>
    constexpr foo(ArgA const &a, ArgB const &b)
    {
        _a = a;
        _b = b;
        incrementing = _a < _b;
    }

    bool incrementing = false;
    StringType _a = {};
    StringType _b = {};
};

export template<size_t N, size_t M>
foo(char const (&a)[N], char const (&b)[M]) -> foo<std::string_view>;

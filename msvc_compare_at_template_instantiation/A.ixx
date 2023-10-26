module;
#include <compare>
export module A;

export struct foo {
    constexpr foo(int a) : _a(a) {}

    auto operator<=>(foo const &) const = default;

    int _a;
};

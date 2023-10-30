module;
#include <cstdlib>
export module A;

export constexpr std::size_t operator ""_uz(unsigned long long lhs) noexcept
{
    return static_cast<std::size_t>(lhs);
}

export constexpr std::size_t foo(unsigned long long lhs) noexcept
{
    return static_cast<std::size_t>(lhs);
}

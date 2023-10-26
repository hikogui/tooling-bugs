module;
#include <expected>
export module A;

// Removing 'constexpr' will fix the crash. 
export constexpr std::expected<int, int> foo()
{
    return 42;
}

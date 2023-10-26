module;
#include <expected>
export module A;

// Removing 'inline' will fix the crash. 
export constexpr std::expected<int, int> foo()
{
    return 42;
}

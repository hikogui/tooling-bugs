module;
#include <expected>
export module A;

// Removing 'inline' will fix the crash. 
export inline std::expected<int, int> foo()
{
    return 42;
}

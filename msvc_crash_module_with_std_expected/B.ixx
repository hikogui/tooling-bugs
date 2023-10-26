module;
#include <expected>
export module B;
import A;

export std::expected<int, int> bar()
{
    return foo();
}

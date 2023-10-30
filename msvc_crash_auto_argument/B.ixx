module;
#include <string_view>
export module B;
import A;

int bar(int x)
{
    return foo<int>{}.test(x);
}


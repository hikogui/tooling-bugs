module;
// Including string_view in this file that does not use string_view will solve the bug.
//#include <string_view>
export module B;
import A;

export constexpr auto bar = foo{"hello", "world"};

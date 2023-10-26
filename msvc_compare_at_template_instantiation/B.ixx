module;
// Including compare in this file that does not use <=> will solve the bug.
//#include <compare>
export module B;
import A;

struct my_tag {};

export constexpr auto bar = foo{1} < foo{2};

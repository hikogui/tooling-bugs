module;
export module B;
import A;

// If this is not a template the bug goes away.
export template<typename Tag>
constexpr auto bar = 1_uz;
// If we use foo(1) instead of 1_uz the bug goes away.
//constexpr auto bar = foo(1);

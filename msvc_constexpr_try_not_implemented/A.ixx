module;
export module B;

// constexpr try/catch inside module is not implemented,
// the bar() function in example.cpp works because that is not a module.
constexpr void foo()
{
    try {
    } catch (...) {
    }
}

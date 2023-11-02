module;
#include <compare>
#include <format>
#include <string_view>
export module A;

export enum class foo {};

export template<typename CharT>
struct std::formatter<foo, CharT> : std::formatter<std::string_view, CharT> {
    auto format(foo const& t, auto& fc) const
    {
        return std::formatter<std::string_view, CharT>::format(std::string_view{"foo"}, fc);
    }
};

// A full specialization is not an issue.
//export template<>
//struct std::formatter<foo, char> : std::formatter<std::string_view, char> {
//    auto format(foo const& t, auto& fc) const
//    {
//        return std::formatter<std::string_view, char>::format(std::string_view{ "foo" }, fc);
//    }
//};


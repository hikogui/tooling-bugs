
#include "example.hpp"

// It seems the problem "error C2953: 'std::conditional': class template has already been defined" is caused by:
//  - Including a system, in this case `<type_traits>`, after;
//  - Defining a function that uses the functionality from an imported module, in this case `weird_message`;
//  - That module's functionality itself depends on class-template from a system header, in this case `std::atomic<>`.
#include <type_traits>

// The following function has nothing to do with the bug.
//int main()
//{
//    return std::is_const_v<int>;
//}

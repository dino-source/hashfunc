#include "solution.h"


std::size_t Solution::hashfunc(std::string_view s) {
    std::size_t hash {s.size()};
    for (std::size_t factor {2}; char ch : s) {
        hash += ch * factor++;
    }

    return hash;
}

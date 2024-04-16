#ifndef DINO_SOURCE_HASHFUNC_H
#define DINO_SOURCE_HASHFUNC_H

#include <cstddef>
#include <string_view>
#include <vector>


class Solution {

public:
    static std::size_t hashfunc(std::string_view s) {
        std::size_t hash {s.size()};
        for (std::size_t factor {2}; char ch : s) {
            hash += ch * factor++;
        }
        return hash;
    }

    template <typename Key = std::string_view, typename Val = int>
    class HashTable {
    public:
        HashTable() {
            values.reserve(3000);
        }

        void add(Key key, Val val) {
            std::size_t index {hashfunc(key)};
            values[index] = val;
        }

        Val get(Key key) const {
            std::size_t index {hashfunc(key)};
            return values[index];
        }
    private:
        std::vector<Val>values;
    };
};

#endif // DINO_SOURCE_HASHFUNC_H

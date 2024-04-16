#include <gtest/gtest.h>
#include "../src/solution.h"

#include <string>
#include <algorithm>


std::string s {"abcdefg"};
std::size_t i {};
Solution::HashTable<std::string_view, double> dict;
double price {2.99};

TEST(TestTopic, hashtable_test) {
    do {
        double actual_result {price + i++};
        dict.add(s, actual_result);
        double expected_result {dict.get(s)};
        EXPECT_FLOAT_EQ(actual_result, expected_result);
    }
    while (std::ranges::next_permutation(s.begin(), s.end()).found);
}

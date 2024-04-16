#include <gtest/gtest.h>
#include "../src/solution.h"
#include <vector>

std::vector<std::string_view> items {"range", "anger", "regna", "gerna", "geran", "nager", "negar", "nagre", "negra", "raneg", "genar", "garne", "grane", "ganer", "anreg", "anerg"};
std::vector<std::size_t> expected_result {2085, 2130, 2080, 2102, 2115, 2117, 2109, 2104, 2092, 2087, 2123, 2114, 2097, 2131, 2108};
Solution sol;
std::size_t idx {};

TEST(TestTopic, hashfunc_test_1) {
    std::size_t actual_result {sol.hashfunc(items[idx])};
    EXPECT_EQ(actual_result, expected_result[idx++]);
}

TEST(TestTopic, hashfunc_test_2) {
    std::size_t actual_result {sol.hashfunc(items[idx])};
    EXPECT_EQ(actual_result, expected_result[idx++]);
}

TEST(TestTopic, hashfunc_test_3) {
    std::size_t actual_result {sol.hashfunc(items[idx])};
    EXPECT_EQ(actual_result, expected_result[idx++]);
}

TEST(TestTopic, hashfunc_test_4) {
    std::size_t actual_result {sol.hashfunc(items[idx])};
    EXPECT_EQ(actual_result, expected_result[idx++]);
}

TEST(TestTopic, hashfunc_test_5) {
    std::size_t actual_result {sol.hashfunc(items[idx])};
    EXPECT_EQ(actual_result, expected_result[idx++]);
}

TEST(TestTopic, hashfunc_test_6) {
    std::size_t actual_result {sol.hashfunc(items[idx])};
    EXPECT_EQ(actual_result, expected_result[idx++]);
}

TEST(TestTopic, hashfunc_test_7) {
    std::size_t actual_result {sol.hashfunc(items[idx])};
    EXPECT_EQ(actual_result, expected_result[idx++]);
}

TEST(TestTopic, hashfunc_test_8) {
    std::size_t actual_result {sol.hashfunc(items[idx])};
    EXPECT_EQ(actual_result, expected_result[idx++]);
}

TEST(TestTopic, hashfunc_test_9) {
    std::size_t actual_result {sol.hashfunc(items[idx])};
    EXPECT_EQ(actual_result, expected_result[idx++]);
}

TEST(TestTopic, hashfunc_test_10) {
    std::size_t actual_result {sol.hashfunc(items[idx])};
    EXPECT_EQ(actual_result, expected_result[idx++]);
}

TEST(TestTopic, hashfunc_test_11) {
    std::size_t actual_result {sol.hashfunc(items[idx])};
    EXPECT_EQ(actual_result, expected_result[idx++]);
}

TEST(TestTopic, hashfunc_test_12) {
    std::size_t actual_result {sol.hashfunc(items[idx])};
    EXPECT_EQ(actual_result, expected_result[idx++]);
}

TEST(TestTopic, hashfunc_test_13) {
    std::size_t actual_result {sol.hashfunc(items[idx])};
    EXPECT_EQ(actual_result, expected_result[idx++]);
}

TEST(TestTopic, hashfunc_test_14) {
    std::size_t actual_result {sol.hashfunc(items[idx])};
    EXPECT_EQ(actual_result, expected_result[idx++]);
}

TEST(TestTopic, hashfunc_test_15) {
    std::size_t actual_result {sol.hashfunc(items[idx])};
    EXPECT_EQ(actual_result, expected_result[idx++]);
}

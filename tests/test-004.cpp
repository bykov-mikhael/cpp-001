#include <gtest/gtest.h>

#include "tsk004/tsk004.hpp"

TEST(Tsk004_Test001, Test001) { EXPECT_EQ(tsk004(1, 1), 1); }
TEST(Tsk004_Test001, Test002) { EXPECT_EQ(tsk004(2, 2), 4); }
TEST(Tsk004_Test001, Test003) { EXPECT_EQ(tsk004(2, 5), 32); }
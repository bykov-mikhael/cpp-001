#include <gtest/gtest.h>

#include "tsk005/tsk005.hpp"

TEST(Tsk005_Test001, Test001) { EXPECT_EQ(tsk051(1000, 0), 10); }
TEST(Tsk005_Test001, Test002) { EXPECT_EQ(tsk051(1000, 1), 10); }
TEST(Tsk005_Test001, Test003) { EXPECT_EQ(tsk051(1000, 3), 12); }
TEST(Tsk005_Test001, Test004) { EXPECT_EQ(tsk051(1000, 6), 14); }

TEST(Tsk005_Test001, Test005) { EXPECT_EQ(tsk052(1, 1), 1); }
TEST(Tsk005_Test001, Test006) { EXPECT_EQ(tsk052(2, 2), 4); }
TEST(Tsk005_Test001, Test007) { EXPECT_EQ(tsk052(2, 5), 32); }
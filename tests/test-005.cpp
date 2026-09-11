#include <gtest/gtest.h>

#include "tsk005/tsk005.hpp"

TEST(Tsk005_Test001, Test001) { EXPECT_EQ(tsk051(500, 7), 1080); }

TEST(Tsk005_Test001, Test002) { EXPECT_EQ(tsk052(1000, 500), 15); }

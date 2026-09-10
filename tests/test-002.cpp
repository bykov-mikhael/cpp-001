#include <gtest/gtest.h>

#include "tsk002/tsk002.hpp"

TEST(Tsk001_Test001, Test001) { EXPECT_EQ(tsk002(1, 2), 3); }
TEST(Tsk001_Test001, Test002) { EXPECT_EQ(tsk002(1, 3), 6); }
TEST(Tsk001_Test001, Test003) { EXPECT_EQ(tsk002(1, 4), 10); }
#include "gtest/gtest.h"

TEST(gtest_check, test_eq)
{
  EXPECT_EQ(1,1);
}

TEST(gtest_check, test_neq)
{
  EXPECT_NE(1,0);
}
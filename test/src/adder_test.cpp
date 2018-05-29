#include "gtest/gtest.h"

#include "adder.h"

class adderFixture : public ::testing::Test
{
  protected:

  int i_a;
  int i_b;
  double d_a;
  double d_b;

  double epsilon;

  virtual void SetUp()
  {
    i_a = 1;
    i_b = 2;
    d_a = 1.0f;
    d_b = 2.0f;
    epsilon = 1e-5;
  }

  virtual void TearDown()
  {

  }

};


TEST_F(adderFixture, int_addition_check)
{
  EXPECT_EQ(adder::add(i_a, i_b), 3);
}

TEST_F(adderFixture, double_addition_check)
{
  ASSERT_TRUE(3.0 - adder::add(d_a, d_b) < epsilon);
}

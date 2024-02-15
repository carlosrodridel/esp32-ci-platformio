#include <unity.h>

void test_dummy(void)
{
  TEST_ASSERT_EQUAL(1, 1);
}

void test_dummy2(void)
{
  TEST_ASSERT_TRUE(1);
}

void test_dummy3(void)
{
  TEST_ASSERT_FALSE(1);
}

void app_main()
{
  UNITY_BEGIN();

  RUN_TEST(test_dummy);
  RUN_TEST(test_dummy2);
  RUN_TEST(test_dummy3);

  UNITY_END();
}
/**
 * @file operations_test.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "conversion_operation.h"
#include "unity.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


void test_bin_to_dec(void)
{
  TEST_ASSERT_EQUAL(4, Bin_to_Dec(100));
  TEST_ASSERT_EQUAL(10, Bin_to_Dec(1010));
}


int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_bin_to_dec);
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}

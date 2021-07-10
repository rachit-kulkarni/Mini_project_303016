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
  TEST_ASSERT_EQUAL(4, Bin_to_Dec(100));//Pass Cases
  TEST_ASSERT_EQUAL(10, Bin_to_Dec(1010));//Pass Cases
}

void test_dec_to_bin(void){

TEST_ASSERT_EQUAL(101, Dec_to_Bin(5));//Pass Cases
TEST_ASSERT_EQUAL(10011, Dec_to_Bin(19));//Pass Cases
}

void test_Dec_to_Oct(void){

  TEST_ASSERT_EQUAL(5, Dec_to_Oct(5));//Pass Cases
  TEST_ASSERT_EQUAL(23, Dec_to_Oct(19));//Pass Cases

}

void test_Oct_to_Dec(void){

  TEST_ASSERT_EQUAL(5, Oct_to_Dec(5));//Pass Cases
  TEST_ASSERT_EQUAL(23, Oct_to_Dec(27));//Pass Cases


}

void test_Oct_to_Bin(void){

  TEST_ASSERT_EQUAL(1000, Oct_to_Bin(10));//Pass Cases
  TEST_ASSERT_EQUAL(11011, Oct_to_Bin(33));//Pass Cases


}

/*void test_fail_bin_to_dec(void)
{
  //TEST_ASSERT_EQUAL(-1, Bin_to_Dec(1290));//fail Cases
  TEST_ASSERT_EQUAL(-1, Bin_to_Dec(1234));//fail case
  TEST_ASSERT_EQUAL(-1,Bin_to_Dec(1010));
}
*/
void test_fail_dec_to_bin(void){

TEST_ASSERT_EQUAL(101, Dec_to_Bin(5));//Pass Cases
TEST_ASSERT_EQUAL(10011, Dec_to_Bin(19));//Pass Cases
}

void test_fail_Dec_to_Oct(void){

  TEST_ASSERT_EQUAL(5, Dec_to_Oct(5));//Pass Cases
  TEST_ASSERT_EQUAL(23, Dec_to_Oct(19));//Pass Cases

}

void test_fail_Oct_to_Dec(void){

  TEST_ASSERT_EQUAL(5, Oct_to_Dec(5));//Pass Cases
  TEST_ASSERT_EQUAL(23, Oct_to_Dec(27));//Pass Cases


}

void test_fail_Oct_to_Bin(void){

  TEST_ASSERT_EQUAL(1000, Oct_to_Bin(10));//Pass Cases
  TEST_ASSERT_EQUAL(11011, Oct_to_Bin(33));//Pass Cases


}

int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_bin_to_dec);/*
  RUN_TEST(test_dec_to_bin);
  RUN_TEST(test_Dec_to_Oct);
  RUN_TEST(test_Oct_to_Dec);
  RUN_TEST(test_Oct_to_Bin);*/
/*
  RUN_TEST(test_fail_bin_to_dec);
  RUN_TEST(test_fail_dec_to_bin);
  RUN_TEST(test_fail_Dec_to_Oct);
  RUN_TEST(test_fail_Oct_to_Dec);
  RUN_TEST(test_fail_Oct_to_Bin);
  */
  /* Close the Unity Test Framework */
  return UNITY_END();
}

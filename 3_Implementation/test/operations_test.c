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
#include "unity_internals.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}
/*Pass Test Cases */
void test_Bin_to_Dec(void);
void test_Bin_to_Hex(void);
void test_Bin_to_Oct(void);
void test_Dec_to_Oct(void);
void test_Oct_to_Dec(void);
void test_Oct_to_Bin(void);
/*Fail Test Cases*/
void test_fail_Bin_to_Dec(void);
void test_fail_Bin_to_Hex(void);
void test_fail_Bin_to_Oct(void);
void test_fail_Dec_to_Oct(void);
void test_fail_Oct_to_Dec(void);
void test_fail_Oct_to_Bin(void);

void test_Bin_to_Dec(void)
{
  TEST_ASSERT_EQUAL(4, Bin_to_Dec(100));//Pass Cases
  TEST_ASSERT_EQUAL(10, Bin_to_Dec(1010));//Pass Cases
}

void test_Bin_to_Oct(void){

  TEST_ASSERT_EQUAL(51, Bin_to_Oct(101001));//Pass Cases
  TEST_ASSERT_EQUAL(12, Bin_to_Oct(1010));//Pass Cases
}

void test_Bin_to_Hex(void){

  TEST_ASSERT_EQUAL_HEX(0x15, Bin_to_Hex(10101));//Pass Cases
  TEST_ASSERT_EQUAL_HEX(0x79, Bin_to_Hex(1111001));//Pass Cases
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


/*Fail Test Cases */
void test_fail_bin_to_dec(void)
{
  TEST_ASSERT_EQUAL(-1, Bin_to_Dec(1290));//Fails
  TEST_ASSERT_EQUAL(-1, Bin_to_Dec(10102));//Fails
  //TEST_ASSERT_EQUAL(-1,Bin_to_Dec("ABC12"));//Fails
}

void test_fail_bin_to_oct(void){

  TEST_ASSERT_EQUAL(-1, Bin_to_Oct(1234));//Fails
  TEST_ASSERT_EQUAL(-1, Bin_to_Oct(10102));

}

void test_fail_bin_to_hex(void){

  TEST_ASSERT_EQUAL_HEX(0xffffffff, Bin_to_Hex(123));//Pass Cases
  TEST_ASSERT_EQUAL_HEX(0xffffffff, Bin_to_Hex(32));//Pass Cases
}

void test_fail_Dec_to_Oct(void){

  TEST_ASSERT_EQUAL(5, Dec_to_Oct(5));//Pass Cases
  TEST_ASSERT_EQUAL(23, Dec_to_Oct(19));//Pass Cases
}

void test_fail_Oct_to_Dec(void){

  TEST_ASSERT_EQUAL(-1, Oct_to_Dec(8));//Pass Cases
  TEST_ASSERT_EQUAL(-1, Oct_to_Dec(9));//Pass Case-1

}

void test_fail_Oct_to_Bin(void){

  TEST_ASSERT_EQUAL(-1, Oct_to_Bin(8));//Pass Cases
  TEST_ASSERT_EQUAL(-1, Oct_to_Bin(9));//Pass Cases


}

int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();
  
/* Run Test functions */
  RUN_TEST(test_Bin_to_Dec);
  RUN_TEST(test_Bin_to_Oct);
  RUN_TEST(test_Bin_to_Hex);
  RUN_TEST(test_Dec_to_Oct);
  RUN_TEST(test_Oct_to_Dec);
  RUN_TEST(test_Oct_to_Bin);
  
  
  RUN_TEST(test_fail_bin_to_dec);  
  RUN_TEST(test_fail_bin_to_oct);
  RUN_TEST(test_fail_bin_to_hex);
  RUN_TEST(test_fail_Dec_to_Oct);
  RUN_TEST(test_fail_Oct_to_Dec);
  RUN_TEST(test_fail_Oct_to_Bin);
  /* Close the Unity Test Framework */
  return UNITY_END();
}

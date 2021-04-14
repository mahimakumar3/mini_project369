#include "unity.h"
#include "calculator.h"
 void setUp(void)
 {
 }
 void tearDown(void)
 {
 }
 void test_subtraction_should_subtraction(void){
     TEST_ASSERT_EQUAL(0,subtraction(5,5));
     TEST_ASSERT_EQUAL(3,subtraction(7,4));
 }
 void test_addition_should_addition(void){
     TEST_ASSERT_EQUAL(0,addition(5,5));
     TEST_ASSERT_EQUAL(3,addition(7,4));
 }
 int main(void)
 {
     UNITY_BEGIN();
     RUN_TEST(test_subtraction_should_subtraction);
	 RUN_TEST(test_addition_should_addition);
     return UNITY_END();
 }

#include "unity.h"
#include "ques.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

complex_t a_struct = {1,2};
complex_t b_struct = {2,3};
complex_t add_struct = {3,5};
complex_t sub_struct = {-1,-1};
complex_t mul_struct = {-4,7};
complex_t div_struct = {0.61538,0.0769};
complex_t wrong = {1,1};

void test_add(void){
  complex_t a = summation(a_struct,b_struct);
  TEST_ASSERT_EQUAL(add_struct.real, a.real);
  TEST_ASSERT_EQUAL(add_struct.imaginary, a.imaginary);
  // TEST_ASSERT_EQUAL(wrong.real, a.real);
  // TEST_ASSERT_EQUAL(wrong.imaginary, a.imaginary); 
}


void test_diff(void)
{
  complex_t a = difference(a_struct,b_struct);
  TEST_ASSERT_EQUAL(sub_struct.real, a.real);
  TEST_ASSERT_EQUAL(sub_struct.imaginary, a.imaginary);
/*   TEST_ASSERT_EQUAL(wrong.real, a.real);
  TEST_ASSERT_EQUAL(wrong.imaginary, a.imaginary); */
}


void test_mul(void){
  complex_t a = multi(a_struct,b_struct);
  TEST_ASSERT_EQUAL(mul_struct.real, a.real);
  TEST_ASSERT_EQUAL(mul_struct.imaginary, a.imaginary);
/*   TEST_ASSERT_EQUAL(wrong.real, a.real);
  TEST_ASSERT_EQUAL(wrong.imaginary, a.imaginary); */
}

void test_div(void){
  complex_t a = division(a_struct,b_struct);
  TEST_ASSERT_EQUAL(div_struct.real, a.real);
  TEST_ASSERT_EQUAL(div_struct.imaginary, a.imaginary);
/*   TEST_ASSERT_EQUAL(wrong.real, a.real);
  TEST_ASSERT_EQUAL(wrong.imaginary, a.imaginary); */
}


int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_diff);
  RUN_TEST(test_mul);
  RUN_TEST(test_div);
 
  /* Close the Unity Test Framework */
  return UNITY_END(); 
}

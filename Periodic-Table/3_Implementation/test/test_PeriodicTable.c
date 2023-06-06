#include "unity.h"
#include "elements.h"

// declaring the necessary variables
char name1[]="hydrogen";
char name2[]="Hydrogen";
char name3[]="Iron";
char name4[]="iron";
char atnm1[]="15";
char atnm2[]="pp";
char atnm3[]="12.2";
char atnm4[]="8";
char sy1[]="He";
char sy2[]="ff";
char sy3[]="Fe";
char sy4[]="fe";
char atnm5[]="-1";
char atnm6[]="200";

/* Write all the test functions */ 
/**
 * @brief Senario based test function of "byName"
 * 
 */
void test_name(void) {
  FILE *ptr = fopen("./src/data.csv", "r");
  TEST_ASSERT_EQUAL(1, byName(ptr,name1));
  FILE *ptr3 = fopen("./src/data.csv", "r");
  TEST_ASSERT_EQUAL(1, byName(ptr3,name4));  
}

/**
 * @brief Requirement based test function of "byName"
 * 
 */
void test_name1(void){
  FILE *ptr1 = fopen("./src/data.csv", "r");
  TEST_ASSERT_EQUAL(0, byName(ptr1,name2));
  FILE *ptr2 = fopen("./src/data.csv", "r");
  TEST_ASSERT_EQUAL(0, byName(ptr2,name3));
}

/* Write all the test functions */ 
/**
 * @brief Requirement based test function of "bySym"
 * 
 */
void test_symb(void)  {  
  FILE *ptr = fopen("./src/data.csv", "r");
  TEST_ASSERT_EQUAL(0, bySym(ptr,sy1));
  FILE *ptr1 = fopen("./src/data.csv", "r");
  TEST_ASSERT_EQUAL(0, bySym(ptr1,sy3));
}

/**
 * @brief Senario based test function of "bySym"
 * 
 */
void test_symb1(void){
  FILE *ptr2 = fopen("./src/data.csv", "r");
  TEST_ASSERT_EQUAL(1, bySym(ptr2,sy4));
  FILE *ptr3 = fopen("./src/data.csv", "r");
  TEST_ASSERT_EQUAL(1, bySym(ptr3,sy2));
}

/* Write all the test functions */ 
/**
 * @brief Requirement based test function of "byAtNum"
 * 
 */
void test_atnum(void)  {
  FILE *ptr = fopen("./src/data.csv", "r");
  TEST_ASSERT_EQUAL(1, byAtNum(ptr,atnm2));
  FILE *ptr1 = fopen("./src/data.csv", "r");
  TEST_ASSERT_EQUAL(1, byAtNum(ptr1,atnm3));
}

/**
 * @brief Requirement based test function of "byAtNum"
 * 
 */
void test_atnum1(void){
  FILE *ptr2 = fopen("./src/data.csv", "r");
  TEST_ASSERT_EQUAL(0, byAtNum(ptr2,atnm1));
  FILE *ptr3 = fopen("./src/data.csv", "r");
  TEST_ASSERT_EQUAL(0, byAtNum(ptr3,atnm4));
}

/**
 * @brief Boundary based test function "byAtnum"
 * 
 */
void test_atnum2(void){
  FILE *ptr2 = fopen("./src/data.csv", "r");
  TEST_ASSERT_EQUAL(1, byAtNum(ptr2,atnm5));
  FILE *ptr3 = fopen("./src/data.csv", "r");
  TEST_ASSERT_EQUAL(1, byAtNum(ptr3,atnm6));
}

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();
/* Run Test functions */
  RUN_TEST(test_name);
  RUN_TEST(test_name1);
  RUN_TEST(test_symb);
  RUN_TEST(test_symb1);
  RUN_TEST(test_atnum);
  RUN_TEST(test_atnum1);
  RUN_TEST(test_atnum2);

  /* Close the Unity Test Framework */
  return UNITY_END();
}



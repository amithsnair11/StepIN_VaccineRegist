#include "unity.h"
#include "regist.h"

#define PROJECT_NAME    "Vaccine_Registration"

// Prototypes 
void test_regist_status(void);
void test_vaccine_status(void);

void setUp(){}

void tearDown(){}

int main()
{
  UNITY_BEGIN();

// Run Test functions for registration and vaccine status
  RUN_TEST(test_regist_status);
  RUN_TEST(test_vaccine_status);
  
  return UNITY_END();
}

// Test functions
void test_regist_status(void) {
  TEST_ASSERT_EQUAL(-1, regist_status(123));
  
  TEST_ASSERT_EQUAL(-1, regist_status(150)); // Fail condition
}

void test_vaccine_status(void) {
  TEST_ASSERT_EQUAL(1, vaccine_status(1));
  
  TEST_ASSERT_EQUAL(2, vaccine_status(1)); // Fail condition
}


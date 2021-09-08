#include "unity.h"
#include "regist.h"

#define PROJECT_NAME    "Vaccine_Registration"

// Prototypes 
void test_regist_status(void);
void test_vaccine_status(void);

void setUp(){}

void tearDown(){}

// Start Unit Test
int main()
{
  UNITY_BEGIN();

// Run Test functions 
  RUN_TEST(test_regist_status);
  RUN_TEST(test_vaccine_status);
  

  // End Unit Test
  return UNITY_END();
}

// Test functions
void test_regist_status(void) {
  TEST_ASSERT_EQUAL(-1, regist_status(123));
  
  // Fail condition
  TEST_ASSERT_EQUAL(-1, regist_status(150));
}

void test_vaccine_status(void) {
  TEST_ASSERT_EQUAL(1, vaccine_status(1));
  
  // Fail condition
  TEST_ASSERT_EQUAL(2, vaccine_status(1));
}


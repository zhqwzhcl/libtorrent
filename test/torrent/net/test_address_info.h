#include "helpers/test_fixture.h"

class test_address_info : public test_fixture {
  CPPUNIT_TEST_SUITE(test_address_info);

  CPPUNIT_TEST(test_basic);
  CPPUNIT_TEST(test_numericserv);
  CPPUNIT_TEST(test_helpers);

  CPPUNIT_TEST_SUITE_END();

public:
  void test_basic();
  void test_numericserv();
  void test_helpers();
};

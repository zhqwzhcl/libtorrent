#ifndef LIBTORRENT_HELPER_TEST_FIXTURE_H
#define LIBTORRENT_HELPER_TEST_FIXTURE_H

#include <cppunit/extensions/HelperMacros.h>

#include "helpers/mock_function.h"
#include "helpers/mock_redirect.h"

class test_fixture : public CppUnit::TestFixture {
public:
  void setUp();
  void tearDown();
};

#endif

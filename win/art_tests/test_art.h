#ifndef _TEST_ART_H
#define _TEST_ART_H

#include "check.h"

DECLARE_TEST(test_art_init_and_destroy);
DECLARE_TEST(test_art_insert);
DECLARE_TEST(test_art_insert_verylong);
DECLARE_TEST(test_art_insert_search);
DECLARE_TEST(test_art_insert_delete);
DECLARE_TEST(test_art_insert_iter);
DECLARE_TEST(test_art_iter_prefix);
DECLARE_TEST(test_art_long_prefix);
DECLARE_TEST(test_art_insert_search_uuid);

#endif
#ifndef _CHECK_H
#define _CHECK_H

#include <assert.h>

void _fail_unless (int result, const char *file, int line, const char *expr, ...);

#define tcase_add_test(_,x) x();

#define DECLARE_TEST(x) void x();

#define START_TEST(x) void x()

#define END_TEST

#define fail_unless1(x) \
    do {                                                               \
        if(!(x)){                                                      \
            printf("error: %s %s %d", "", __FUNCTION__, __LINE__);     \
            assert(0);                                                 \
        }                                                              \
    } while (0)
    

#define fail_unless(expr, ...)\
        _fail_unless(expr, __FILE__, __LINE__,\
        "Assertion '"#expr"' failed" , ## __VA_ARGS__, NULL)


#endif
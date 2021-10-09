#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "leptjson.h"

static int main_ret = 0;
static int test_count = 0;
static int test_pass = 0;

#define EXPECT_EQ_BASE(equality, expect, actual, format) \
    do {\
        test_count++;\
        if (equality)\
            test_pass++;\
        else {\
            fprintf(stderr, "%s:%d: expect: " format "actual: " format "\n", __FILE__, __LINE__, expect, actual);\
            main_ret = 1;\
        }\
    } while(0)

#define EXPECT_EQ_INT(expect, actual) EXPECT_EQ_BASE((expect) == (actual), expect, actual, "%d")

#define TEST(init, expect_status, expect_type, input) \
    do {\
        lept_value v;\
        v.type =init;\
        EXPECT_EQ_INT(expect_status, lept_parse(&v, input));\
        EXPECT_EQ_INT(expect_type, lept_get_type(&v));\
    } while(0)

static void test_parse_null() {
    TEST(LEPT_TRUE, LEPT_PARSE_OK, LEPT_NULL, "null");
}

static void test_parse_true() {
    TEST(LEPT_NULL, LEPT_PARSE_OK, LEPT_TRUE, "true");
}

static void test_parse_false() {
    TEST(LEPT_NULL, LEPT_PARSE_OK, LEPT_FALSE, "false");
}

static void test_parse_expect_value() {
    TEST(LEPT_FALSE, LEPT_PARSE_EXPECT_VALUE, LEPT_NULL, "");
    TEST(LEPT_FALSE, LEPT_PARSE_EXPECT_VALUE, LEPT_NULL, " ");
}

static void test_parse_invalid_value() {
    TEST(LEPT_FALSE, LEPT_PARSE_INVALID_VALUE, LEPT_NULL, "nul");
    TEST(LEPT_FALSE, LEPT_PARSE_INVALID_VALUE, LEPT_NULL, "?");
}

static void test_parse_root_not_singular() {
    TEST(LEPT_FALSE, LEPT_PARSE_ROOT_NOT_SINGULAR, LEPT_NULL, "null x");
}

static void test_parse() {
    test_parse_null();
    test_parse_false();
    test_parse_true();
    test_parse_expect_value();
    test_parse_invalid_value();
    test_parse_root_not_singular();
}

int main() {
    test_parse();
    printf("%d/%d (%3.2f%%) passed\n", test_pass, test_count, test_pass * 100.0 / test_count);
    return main_ret;
}
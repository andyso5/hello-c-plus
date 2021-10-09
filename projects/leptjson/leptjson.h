typedef enum {LEPT_NULL, LEPT_FALSE, LEPT_TRUE, LEPT_NUMBER, LEPT_STRING, LEPT_ARRAY, LEPT_OBKECT} lept_type;

typedef struct
{
    lept_type type;
} lept_value;

int lept_parse(lept_value *v, const char *json);

enum {
    LEPT_PARSE_OK = 0,
    LEPT_PARSE_EXPECT_VALUE,
    LEPT_PARSE_INVALID_VALUE,
    LEPT_PARSE_ROOT_NOT_SINGULAR
};

/* 访问结果的函数， 也就是获取其类型 */
lept_type lept_get_type(const lept_value *v);
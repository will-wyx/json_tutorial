#ifndef LEPTJSON_H__
#define LEPTJSON_H__

/* JSON 数据类型枚举 */
typedef enum
{
    LEPT_NULL,
    LEPT_FALSE,
    LEPT_TRUE,
    LEPT_NUMBER,
    LEPT_STRING,
    LEPT_ARRAY,
    LEPT_OBJECT
} lept_type;

/* 解析JSON函数的返回值枚举 */
enum
{
    LEPT_PARSE_OK = 0,
    LEPT_PARSE_EXPECT_VALUE,
    LEPT_PARSE_INVALID_VALUE,
    LEPT_PARSE_ROOT_NOT_SINGULAR
};

/* JSON 数据结构 */
typedef struct
{
    lept_type type;
} lept_value;

/**
 * 解析JSON
 * json: C 字符串
 * 
 * 示例：
 * lept_value v;
 * const char json[] = ...;
 * int ret = lept_parse(&v, json);
 */
int lept_parse(lept_value *v, const char *json);

/* 访问结果的函数 */
lept_type lept_get_type(const lept_value *v);

#endif

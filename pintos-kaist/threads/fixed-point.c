// fixed-point.c

#include "fixed-point.h"
#include <stdint.h> // int64_t 사용

// 변환
int int_to_fp(int n)
{
    return n * F;
}

int fp_to_int(int x)
{
    return x / F;
}

int fp_to_int_round(int x)
{
    return (x >= 0) ? (x + F / 2) / F : (x - F / 2) / F;
}

// 기본 연산
int add_fp(int x, int y)
{
    return x + y;
}

int sub_fp(int x, int y)
{
    return x - y;
}

int add_fp_int(int x, int n)
{
    return x + n * F;
}

int sub_fp_int(int x, int n)
{
    return x - n * F;
}

// 곱셈 / 나눗셈
int mul_fp(int x, int y)
{
    return ((int64_t)x) * y / F;
}

int mul_fp_int(int x, int n)
{
    return x * n;
}

int div_fp(int x, int y)
{
    return ((int64_t)x) * F / y;
}

int div_fp_int(int x, int n)
{
    return x / n;
}

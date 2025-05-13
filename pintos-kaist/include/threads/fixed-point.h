// fixed-point.h

#ifndef FIXED_POINT_H
#define FIXED_POINT_H

#define F (1 << 14) // 17.14 고정소수점 포맷의 스케일 팩터

// 변환
int int_to_fp(int n);       // 정수 -> 고정소수점
int fp_to_int(int x);       // 고정소수점 -> 정수 (내림)
int fp_to_int_round(int x); // 고정소수점 -> 정수 (반올림)

// 기본 연산
int add_fp(int x, int y);     // x + y
int sub_fp(int x, int y);     // x - y
int add_fp_int(int x, int n); // x + n
int sub_fp_int(int x, int n); // x - n

// 곱셈/나눗셈
int mul_fp(int x, int y);     // x * y
int mul_fp_int(int x, int n); // x * n
int div_fp(int x, int y);     // x / y
int div_fp_int(int x, int n); // x / n

#endif

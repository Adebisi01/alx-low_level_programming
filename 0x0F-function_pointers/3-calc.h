#ifndef _3-CALC_
#define _3-CALC_
#include <stdio.h>

int (*get_op_func(char *s))(int a, int b);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif

#ifndef CAL_H
#define CAL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
int sum_them_all(const unsigned int n, ...);
void print_all(const char *const format, ...);
#endif
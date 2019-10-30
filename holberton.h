#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>

int percent(const char *module, int count);
int case_c(va_list our_char);
int case_s(va_list our_str);
int _our_write(char c);
int _printf(const char *format, ...);
int cases_2(va_list our_list, const char *module);
int case_digit(va_list our_digit);
int recur(int our_digit);

#endif

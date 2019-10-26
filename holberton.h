#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);
int _printf(const char *format, ...);

#endif

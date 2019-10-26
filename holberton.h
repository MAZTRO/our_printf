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
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _printf(const char *format, ...);
void switch_char(void *argument_input);
int switch_numbers(void *argument_input);
void switch_rare_case(void *argument_input);
void switch_unknown(void *argument_input);
void question(char char_type, void *argument_input);

#endif

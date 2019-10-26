#include <limits.h>
#include <stdio.h>
#include "holberton.h"
/**
 * switch_char - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char switch_char(*argument_input)
{
	int i = 0;
	while (argument_input)
	{
		_putchar(argument_input[i]);
	}
/* int switch_numbers()

int switch_rare_case()

int switch_unknown */

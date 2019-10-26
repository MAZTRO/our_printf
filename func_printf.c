#include "holberton.h"
/**
 * switch_char - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void switch_char(void *argument_input)
{
	int i = 0;
	while (argument_input)
	{
		_putchar(((char*)argument_input)[i]);
		i++;
	}
}
/* int switch_numbers()

int switch_rare_case()

int switch_unknown */

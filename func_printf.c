#include "holberton.h"
/**
 * percent - writes the character c to stdout
 * @module: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int percent(const char *module)
{
	int count = 0, count_aux = 0;

	module--;
	while (*module == '%' || *module == 32)
	{
		if (*module == '%')
		{
			count++;
		}
		if (count == 2)
		{
			_our_write('%');
			count_aux += 1;
			count = 0;
		}
		module++;
	}
	if (count == 1)
	{
		return (count_aux);
	}
	return (0);
}

/**
 * case_s - writes the character c to stdout
 * @our_char: Lol
 * @count: Lol
 * Return: On success 1.
 */

int case_c(va_list our_char)
{
	char print_char;
	int count = 0;

	print_char = va_arg(our_char, int);
	_our_write(print_char);
	count++;
	return (count);
}
/**
 * case_s - writes the character c to stdout
 * @our_str: Lol
 * Return: On success 1.
 */

int case_s(va_list our_str)
{
	char *argument = NULL;
	int strcount;

	argument = va_arg(our_str, char*);

	for (strcount = 0; argument[strcount] != '\0'; strcount++)
	{
		_our_write(argument[strcount]);
	}
	return (strcount);
}

#include "holberton.h"
#include <stdio.h>
/**
 * percent - writes the character c to stdout
 * @module: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int percent(const char *module, int count)
{
	module--;
	if (module[count] == module[count + 1])
	{
		_our_write('%');
		count++;
	}
	else
	{
		module++;
	}
	return (count);
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
	int strcount, x;
	char our_null[] = "(null)";

	argument = va_arg(our_str, char*);

	if (argument == NULL)
	{
		for (x = 0; x < 6; x++)
		_our_write(our_null[x]);
		return (0);
	}
	else if (argument == '\0')
	{
		return (0);
	}
	else
	{
		for (strcount = 0; argument[strcount] != '\0'; strcount++)
		{
			_our_write(argument[strcount]);
		}
	}
	return (strcount);
}

/**
 * recur - Print anything
 * @format: the string that i have in the input.
 * Return: Always 0 if the functions works.
 */

int recur(long long int our_digit, int count)
{
	if (our_digit < 0)
	{
		_our_write('-');
		our_digit = -our_digit;
    }

    if (our_digit / 10)
		recur(our_digit / 10, count++);

    _our_write(our_digit % 10 + '0');
	return (count);
}

/**
 * case_digit - Print anything
 * @str the string that i have in the input.
 * @our_var: the integer to convert.
 * @base: the base of the number, always 10
 * Return: the new string.
*/

int case_digit(va_list our_digit)
{
	long long int digit = 0;
	int count = 0, count_total = 0;

	digit = va_arg(our_digit, long long int);
	count_total = recur(digit, count);

	return (count_total - 1);
}

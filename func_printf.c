#include "holberton.h"
/**
 * percent - writes the character c to stdout
 * @module: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int percent(const char *module, int count)
{
	int count_space = 0;

	while (module[count + 1] == 32)
	{
		count_space++;
		module++;
		if (module != '%' || module != 32)
		{
			
	}


	if (*module == '%' && module[count + 1] !=)
	{
		_our_write('%');
		module++;
	}
	else if (*module == 32)
	{
		

	return (module);

	int count = 0, count_aux = 0;
	module--;
		while (*module == '%') || *module[count + 1] == 32)
	{
		if (module++ == 32)
		{
			module++;
		}
		if (*module == '%')
		{
			_our_write('%')
			count++;
			module++;
		}
		else if (*module == 32)
		{
			
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
		return (count_aux - 1);
	}
	return (0);
}
*/

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

#include "holberton.h"
/**
 * percent - writes the character c to stdout
 * @module: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int percent(const char *module)
{
	//int y = 0;
	//int z = 0;
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

	/*
	z = count % 2;
	if (z == 0)
	{
		while (y < (count / 2))
		{
			_our_write('%');
			y++;
		}
		return (y);
	}
	else
	{
		while (y < (count / 2))
		{
			_our_write('%');
			y++;
		}
		_our_write('%');
		return (y + 1);

	}*/
	return (0);
}

/**
 * case_c - writes the character c to stdout
 * @module: The character to print
 * @count: Lol
 * @arguments: Lol
 * Return: On success 1.
 */

void case_c(char our_char)
{
	_our_write(our_char);
}

/**
 * case_s - writes the character c to stdout
 * @module: The character to print
 * @count: Lol
 * @arguments: Lol
 * Return: On success 1.
 */

int case_s(void *arguments)
{
	int strcount;

	for (strcount = 0; ((char *)arguments)[strcount] != '\0'; strcount++)
	{
		_our_write(((char *)arguments)[strcount]);
	}
	return (strcount++);
}

/**
 * print_numbers - writes the character c to stdout
 * @module: The character to print
 * @count: Lol
 * @arguments: Lol
 * Return: On success 1.
 */

int print_numbers()
{
	return (0);
}

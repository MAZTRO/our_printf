#include "holberton.h"
/**
 * percent - writes the character c to stdout
 * @module: The character to print
 * @count: Lol
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int percent(const char *module, int count)
{
	int x = count, result;
	int y = 0;
	int z = 0;

	while (module[x] == '%')
	{
		x++;
	}

	result = x - count;
	z = result % 2;

	if (z == 0)
	{
		while (y < (result / 2))
		{
			_our_write('%');
			y++;
		}
	}
	else
	{
		while (y < (result / 2))
		{
			_our_write('%');
			y++;
		}
		_our_write('%');
	}
	return (count + result - 1);
}

/**
 * switch_task_0 - writes the character c to stdout
 * @module: The character to print
 * @count: Lol
 * @arguments: Lol
 * Return: On success 1.
 */

int switch_task_0(const char *module, int count, void *arguments)
{
	void *argument;
	int strcount;
	int integers;

	argument = arguments;

	switch (module[count + 1])
	{
	case 's':
		for (strcount = 0; ((char *)argument)[strcount] != '\0'; strcount++)
		{
			_our_write(((char *)argument)[strcount]);
		}
		break;
	case '%':
		count = percent((char *)module, count);
		break;
	case 'd':
		integers = *(int *)module;
		_our_write(integers + '0');
		break;

	default:
		break;
	}
	return (strcount - 1);
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
